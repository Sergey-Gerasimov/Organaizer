# Users
## GET /apiv1/users
Возвращает список пользователей вместе с созданными ими напоминаниями
### Output example
    {
       "user_count":2,
       "users":[
          {
             "id": 1,
             "nickname":"Admin",
             "reminders":[
                1,
                2,
                3
             ]
          },
          {
             "id": 2,
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
Возвращает пользователя с заданным именем. Если такого пользователя не существует то выдаётся код 404
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
Создаётся новый пользователь с именем и паролем. При создании пользователя ему задаётся новый уникальный id. При выборе имени разрешены следующие символы: A-Za-z0-9_  Если такое имя уже существует то выдаётся код 404
### Input example
    {
       "nickname":"test",
       "password":"testpassword"
    }
