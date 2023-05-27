set(STR "")
set(FLAG NO1)
set(NUM 55)

if (NOT STR AND FLAG AND NUM LESS 60)
  message("this is first branch")
  message("this is the first branch too")
elseif (STR)
  message("STR is not empty")
else()
  message("the last branch")
endif()

