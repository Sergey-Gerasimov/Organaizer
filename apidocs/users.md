# Users
## GET /apiv1/users
���������� ������ ������������� ������ � ���������� ��� �������������
### Output example
    {
       "user_count":2,
       "users":[
          {
             "nickname":"Admin",
             "reminders":[
                1,
                2,
                3
             ]
          },
          {
             "nickname":"test",
             "reminders":[
                4,
                5,
                6
             ]
          }
       ]
    }
## GET /apiv1/users/{nickname}
���������� ������������ � ��������� ������. ���� ������ ������������ �� ���������� �� ������� ��� 404
### Output example (your user)
    {
       "nickname":"Admin",
       "reminders":[
       	  1,
          2,
          3
       ]
          
    }
## POST /apiv1/users
�������� ����� ������������ � ������ � �������. ���� ����� ��� ��� ���������� �� ������� ��� 404
### Input example
    {
       "nickname":"test",
       "password":"testpassword"
    }
