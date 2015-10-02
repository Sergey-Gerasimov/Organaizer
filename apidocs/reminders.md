# Reminders
## GET /apiv1/reminders/user/{nickname}
Возвращает все напоминания для пользователя. Если такого пользователя не существует, то выдаётся код 404
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
Создаётся новое напоминание. В массиве "moderators" хранятся пользователи, которые могут редактировать данное напоминание. 
Создатель напоминания добавляется в "moderators" по умолчанию. Если напоминание с таким названием уже существует, то выдаётся код 400.
Если одного из пользователей в массиве не существует то выдаётся код 400.
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
Возвращает напоминание с заданным id. Если напоминания с таким id не существует, то выдаётся код 404.
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
Позволяет изменить название, дату и время у напоминания с заданным id. Если напоминания с таким id не существует, то выдаётся код 404. 
### Input example
    {
       	"name":"Go to home",
       	"date":"08-01-2016",
       	"time":"20-00"
    }
## DELETE /apiv1/reminders/id/{id}
Удаляет напоминание с заданным id. Если напоминания с таким id не существует, то выдаётся код 404.
## POST /apiv1/reminders/id/{id}?action=add
Позволяет добавить нового модератора для заданного напоминания. Если это действие выполняет пользователь, которого нет в списке "moderators" то выдаётся код 401.
### Input example
    {
       "Admin_best_friend"
    }
## POST /apiv1/reminders/id/{id}?action=remove
Позволяет удалять модератора для заданного напоминания. Если это действие выполняет пользователь, которого нет в списке "moderators" то выдаётся код 401.
### Input example (id)
    {
       "Admin_best_friend"
    }
