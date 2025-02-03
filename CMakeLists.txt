cmake_minimum_required(VERSION 3.10)

set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreadedDLL")
set(GTEST_FORCE_SHARED_CRT ON)


project(BankAccountTest)


add_subdirectory(googletest)


include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${PROJECT_SOURCE_DIR}/src)


set(SOURCES
    src/BankAccount.cpp
    tests/BankAccountTest.cpp
)


add_executable(BankAccountTest ${SOURCES})


target_link_libraries(BankAccountTest gtest gtest_main)


enable_testing()
add_test(NAME BankAccountTest COMMAND BankAccountTest)
