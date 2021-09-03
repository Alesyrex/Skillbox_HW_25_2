cmake_minimum_required(VERSION 3.17)

add_executable(Skillbox_HW_25_2 main.cpp cpu.cpp ram.cpp disk.cpp gpu.cpp kdb.cpp ${MY_INCLUDE_DIR}/cpu.h
              ${MY_INCLUDE_DIR}/disk.h ${MY_INCLUDE_DIR}/gpu.h ${MY_INCLUDE_DIR}/kdb.h ${MY_INCLUDE_DIR}/ram.h)
target_include_directories(Skillbox_HW_25_2 PUBLIC ${MY_INCLUDE_DIR})