# Reminders
## GET /apiv1/reminders/user/{nickname}
���������� ��� ����������� ��� ������������. ���� ������ ������������ �� ����������, �� ������� ��� 404
### Output example
    {
       "reminders_count":1,
       "reminders":[
          {
            "id":1,
            "user":"Admin",
            "name":"My reminder",
            "date":"31-12-2015",
			"time":"23-59"
			"moderators":[
				"Admin"
			]
          }
       ]
    }
## POST /apiv1/reminders 
�������� ����� �����������. � ������� "moderators" �������� ������������, ������� ����� ������������� ������ �����������. 
��������� ����������� ����������� � "moderators" �� ���������. ���� ����������� � ����� ��������� ��� ����������, �� ������� ��� 400.
���� ������ �� ������������� � ������� �� ���������� �� ������� ��� 400.
### Input example
    {
        "name":"Go to work",
        "date":"08-01-2016",
        "time":"07-00"
		"moderators":[
			"Admin_friend"
		]
    }

## GET /apiv1/reminders/id/{id}
���������� ����������� � �������� id. ���� ����������� � ����� id �� ����������, �� ������� ��� 404.
### Output example
    {
       	"id":2,
		"user":"Admin"
       	"name":"Go to work",
       	"date":"08-01-2016",
       	"time":"07-00"
		"moderators":
		[
			"Admin"
			"Admin_friend"
		]
    }
## POST /apiv1/reminders/id/{id}
��������� �������� ��������, ���� � ����� � ����������� � �������� id. ���� ����������� � ����� id �� ����������, �� ������� ��� 404. 
### Input example
    {
       	"name":"Go to home",
       	"date":"08-01-2016",
       	"time":"20-00"
    }
## DELETE /apiv1/reminders/id/{id}
������� ����������� � �������� id. ���� ����������� � ����� id �� ����������, �� ������� ��� 404.
## POST /apiv1/reminders/id/{id}?action=add
��������� �������� ������ ���������� ��� ��������� �����������. ���� ��� �������� ��������� ������������, �������� ��� � ������ "moderators" �� ������� ��� 401.
### Input example
    {
       "Admin_best_friend"
    }
## POST /apiv1/reminders/id/{id}?action=remove
��������� ������� ���������� ��� ��������� �����������. ���� ��� �������� ��������� ������������, �������� ��� � ������ "moderators" �� ������� ��� 401.
### Input example (id)
    {
       "Admin_best_friend"
    }
