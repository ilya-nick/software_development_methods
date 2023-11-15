cmake_minimum_required(VERSION 3.26)
project(mrpo_lab1_3)

set(CMAKE_CXX_STANDARD 17)

add_executable(mrpo_lab1_3 main.cpp
        Airplane.h
        AddRecord.h
        ShowAllRecords.h
        ShowRecord.h
        SearchRecords.h
)
