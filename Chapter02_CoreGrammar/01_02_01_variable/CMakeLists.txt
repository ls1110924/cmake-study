# set variable
set(AUTHOR_NAME Shuai)
message("001->${AUTHOR_NAME}")
set(AUTHOR "A Shuai")
message("002-->${AUTHOR}")
set(AUTHOR A\ Shuai1)
message("003-->${AUTHOR}")

# set list variable
set(SLOGAN Hello world)
message("010-->${SLOGAN}")
set(SLOGAN Hello;World)
message("011-->${SLOGAN}")
set(SLOGAN "Hello;World")
message("012-->${SLOGAN}")

# set num or boolean
set(NUM 30)
message("100-->${NUM}")
set(BOOLEAN ON)
message("101-->${BOOLEAN}")
set(BOOLEAN YES)
message("102-->${BOOLEAN}")
set(BOOLEAN TRUE)
message("103-->${BOOLEAN}")


