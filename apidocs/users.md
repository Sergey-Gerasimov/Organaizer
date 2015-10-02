# Users
## GET /apiv1/users
Возвращает список пользователей вместе с созданными ими напоминаниями
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
Возвращает пользователя с задданным именем. Если такого пользователя не существует то выдаётся код 404
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
Создаётся новый пользователь с именем и паролем. Если такое имя уже существует то выдаётся код 404
### Input example
    {
       "nickname":"test",
       "password":"testpassword"
    }
