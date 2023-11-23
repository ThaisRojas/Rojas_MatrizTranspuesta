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

void imprimirMatriz(int filas, int columnas, int matriz[filas][columnas]) {
    int i, j;

    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

void MTranspuesta(int filas, int columnas, int matriz[filas][columnas], int transpuesta[columnas][filas]) {
    int i, j;

    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            transpuesta[j][i] = matriz[i][j]; // Intercambia filas por columnas para generar la matriz transpuesta
        }
    }
}

int main() {
    int filas, columnas;

    printf("Ingrese el número de filas: "); // Solicita al usuario cuantas filas
    scanf("%d", &filas);

    printf("Ingrese el número de columnas: "); 
    scanf("%d", &columnas);

    int matriz[filas][columnas];
    int transpuesta[columnas][filas];

MatrizA(filas, columnas, matriz);

    printf("\nMatriz original:\n");
    imprimirMatriz(filas, columnas, matriz);

    MTranspuesta(filas, columnas, matriz, transpuesta); // Calcula la matriz transpuesta de la matriz original y la almacena en la matriz transpuesta.

    printf("\nMatriz transpuesta:\n");
    imprimirMatriz(columnas, filas, transpuesta);

    return 0;
}