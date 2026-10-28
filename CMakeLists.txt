cmake_minimum_required(VERSION 3.20)

project(BankAppV1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(BankAppV1
    main.cpp
    BankAccount.h
    BankAccount.cpp
    CheckingAccount.h
    SavingsAccount.h
)
