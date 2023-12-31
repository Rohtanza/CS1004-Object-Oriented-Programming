cmake_minimum_required(VERSION 3.25)
project(opp_paper)

set(CMAKE_CXX_STANDARD 17)

add_executable(opp_paper main.cpp AType.cpp AType.h BType.cpp BType.h CType.cpp CType.h DType.cpp DType.h)
