cmake_minimum_required(VERSION 4.0)
project(TesteC C)

set(CMAKE_C_STANDARD 11)

add_executable(TesteC main.c
        test.c
        notas.c
        exercicio_switch_case_dias.c
        exercicio_loop_contagem_regressiva.c
        aula1-2/ficha1/ex1_ficha1.c
        aula1-2/ficha1/ex2_ficha1.c
        aula1-2/ficha1/ex3_ficha1.c
        aula1-2/ficha1/ex4_ficha1.c
        aula1-2/ficha1/ex5_ficha1.c
        aula1-2/ficha2/ex1_ficha2.c
        aula1-2/ficha2/ex2_ficha2.c
        aula1-2/ficha2/ex3_ficha2.c
        aula1-2/ficha2/ex4_ficha2.c
        aula1-2/ficha2/ex5_ficha2.c
        aula3/ex_juntar_strings_arrays.c
)
