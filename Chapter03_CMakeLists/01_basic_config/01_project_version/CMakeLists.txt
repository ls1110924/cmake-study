cmake_minimum_required(VERSION 3.12)
project(APP VERSION 1.2.3.4 LANGUAGES C CXX)
message("version is ${PROJECT_VERSION} --- ${APP_VERSION}")
message("major is ${PROJECT_VERSION_MAJOR} --- ${APP_VERSION_MAJOR}")
message("minor is ${PROJECT_VERSION_MINOR} --- ${APP_VERSION_MINOR}")
message("patch is ${PROJECT_VERSION_PATCH} --- ${APP_VERSION_PATCH}")
message("tweak is ${PROJECT_VERSION_TWEAK} --- ${APP_VERSION_TWEAK}")

configure_file(version.h.in "src/version.h")


