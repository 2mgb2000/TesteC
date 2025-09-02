cmake_minimum_required(VERSION 4.0)
project(TesteC C)

set(CMAKE_C_STANDARD 11)

add_executable(TesteC main.c
        test.c
        notas.c
        exercicio_switch_case_dias.c
        exercicio_loop_contagem_regressiva.c)
