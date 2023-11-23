#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void MatrizA(int filas, int columnas, int matriz[filas][columnas]) {
    int i, j;
    srand(time(NULL)); // Inicializa los números aleatorios

    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 101; // Genera los números aleatorios
        }
    }
}