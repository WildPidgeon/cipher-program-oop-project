cmake_minimum_required(VERSION 3.23)
project(CypherProgram)

set(CMAKE_CXX_STANDARD 14)

add_executable(CypherProgram src/main.cpp src/ciphers/Caesar.cpp include/ciphers/Caesar.h src/ciphers/Vigenere.cpp include/ciphers/Vigenere.h src/ciphers/CaesarBox.cpp include/ciphers/CaesarBox.h)
