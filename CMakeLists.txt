cmake_minimum_required(VERSION 3.21)
project(waveform_function_generator C)

set(CMAKE_C_STANDARD 99)

add_executable(waveform_function_generator main.c
        waveform.h
        waveform.c)
