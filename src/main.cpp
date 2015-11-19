#include <fstream>
#include <fastcgi++/request.hpp>
#include <fastcgi++/manager.hpp>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
const std::string socketPath = "/home/sergeygerasimov/Hello-world/fastcgi.sock";
class HelloWorld: public Fastcgipp::Request<wchar_t>
{
	bool response()
	{
		out << "Content-Type: text/html; charset=utf-8\r\n\r\n";
		out << "<html><head><meta http-equiv='Content-Type' content='text/html; charset=utf-8' />";
		out << "<title>fastcgi++: Hello World in UTF-8</title></head><body>";
		out << "Hello World<br />";
		out << "</body></html>";
		return true;
	}
};
int main()
{
	sockaddr_un address, client;
	address.sun_family = AF_UNIX;
	strcpy( address.sun_path, socketPath.c_str() );
	socklen_t cl_size;
	int fd = socket( AF_UNIX, SOCK_STREAM, 0 );
	if( fd < 0 )
	{
		perror( "socket" );
		return 1;
	}
	unlink( socketPath.c_str() );
	if( bind( fd, ( sockaddr* )( &address ), sizeof( address ) ) < 0 )
	{
		perror( "bind" );
		return 1;
	}
	if( listen( fd, 5 ) < 0 )
	{
		perror( "listen" );
		return 1;
	}
	try
	{
		printf( "Listening on socket %s", socketPath.c_str() );
		Fastcgipp::Manager< HelloWorld > fcgi( fd );
		fcgi.handler();
	}
	catch( const std::exception& ex )
	{
		fprintf( stderr, "%s\n", ex.what() );
	}
	return 0;
}
