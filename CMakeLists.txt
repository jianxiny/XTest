cmake_minimum_required(VERSION 3.24)
project(XTest)

set(CMAKE_CXX_STANDARD 20)

#add_executable(XTest tests/main.cpp Test.h tests/Creation.cpp tests/Confirm.cpp tests/Setup.cpp Memo/log.h Memo/tests/main.cpp Memo/tests/Construction.cpp)
add_executable(XTest  Test.h Memo/Log.h Memo/tests/main.cpp Memo/tests/Construction.cpp Memo/tests/Util.h Memo/tests/Util.cpp Memo/tests/Tags.cpp Memo/tests/LogTags.h)
