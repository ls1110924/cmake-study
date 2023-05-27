set(LIST "Hello;world")

list(APPEND LIST Hello)
list(APPEND LIST "A;Shuai")
list(LENGTH LIST LIST_LENGTH)
list(JOIN LIST "-" LIST_STR)
message("list length is ${LIST_LENGTH}")
message("list content is ${LIST_STR}")
message("raw list is ${LIST}")


