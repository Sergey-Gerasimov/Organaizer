# Reminders
## GET /apiv1/reminders
Возвращает список со всеми напоминаниями.
### Output example
    {
       "reminders_count":1,
       "reminders":[
          {
        	"name":"My reminder",
        	"date":"31-12-2015",
		"time":"23-59"
          }
       ]
    }
    
## GET /apiv1/reminders/{id}
Возвращает напоминание с заданным id. Если напоминания с таким id не существует, то выдаётся код 404.
### Output example
    {
       	"name":"Go to work",
       	"date":"08-01-2016",
       	"time":"07-00"
    }
    
## POST /apiv1/reminders
Создаётся новое напоминание. Если напоминание с таким названием уже существует, то выдаётся код 400.\
### Input example
    {
        "name":"Go to work",
        "date":"08-01-2016",
        "time":"07-00"
    }

## PUT /apiv1/reminders/{id}
Позволяет изменить название, дату и время у напоминания с заданным id. Если напоминания с таким id не существует, то выдаётся код 404. 
### Input example
    {
       	"name":"Go to home",
       	"date":"08-01-2016",
       	"time":"20-00"
    }
    
## DELETE /apiv1/reminders/{id}
Удаляет напоминание с заданным id. Если напоминания с таким id не существует, то выдаётся код 404.

## GET /apiv1/users/{id}/reminders
Возвращает список со всеми напоминаниями для конкретного пользователя.
### Output example
    {
       "reminders_count":1,
       "reminders":[
          {
        	"name":"My reminder",
        	"date":"31-12-2015",
		"time":"23-59"
          }
       ]
    }
    
## GET /apiv1/users/{id}/reminders/{id}
Возвращает напоминание с заданным id для конкретного пользователя. Если напоминания с таким id не существует, то выдаётся код 404.
### Output example
    {
       	"name":"Go to work",
       	"date":"08-01-2016",
       	"time":"07-00"
    }
   
## POST /apiv1/users/{id}/reminders
Создаётся новое напоминание для конкретного пользователя. Если напоминание с таким названием уже существует, то выдаётся код 400.
### Input example
    {
        "name":"Go to work",
        "date":"08-01-2016",
        "time":"07-00"
    }

## DELETE /apiv1/users/{id}/reminders/{id}
Удаляет напоминание с заданным id для конкретного пользователя. Если напоминания с таким id не существует, то выдаётся код 404.
