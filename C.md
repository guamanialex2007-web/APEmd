⬅️ [Volver al indice](./README.md)

```c

#include <stdio.h>

// Definición de constantes globales 
#define FILAS 2
#define COLUMNAS 3

// Declaración de prototipos
void completarMatrices(int A[FILAS][COLUMNAS], int B[FILAS][COLUMNAS]);
void sumaMatriz(int A[FILAS][COLUMNAS], int B[FILAS][COLUMNAS], int Resultado[FILAS][COLUMNAS]);
void restaMatriz(int A[FILAS][COLUMNAS], int B[FILAS][COLUMNAS], int Resultado[FILAS][COLUMNAS]);
void multiplicacionMatriz(int A[FILAS][COLUMNAS], int B[FILAS][COLUMNAS], int Resultado[FILAS][COLUMNAS]);
void mostrarResultado(const char *titulo, int Matriz[FILAS][COLUMNAS]);

int main() {
    // Declaración de arreglos bidimensionales 
    int A[FILAS][COLUMNAS];
    int B[FILAS][COLUMNAS];
    int Suma[FILAS][COLUMNAS];
    int Resta[FILAS][COLUMNAS];
    int Multiplicacion[FILAS][COLUMNAS];

    // 1. Lectura de datos desde la consola
    completarMatrices(A, B);

    // 2. Procesamiento de operaciones término a término 
    sumaMatriz(A, B, Suma);
    restaMatriz(A, B, Resta);
    multiplicacionMatriz(A, B, Multiplicacion);

    // 3. Impresión de resultados en consola
    mostrarResultado("Suma (A + B)", Suma);
    mostrarResultado("Resta (A - B)", Resta);
    mostrarResultado("Multiplicacion Elemento a Elemento (A * B)", Multiplicacion);

    return 0;
}

//solicitae valores
void completarMatrices(int A[FILAS][COLUMNAS], int B[FILAS][COLUMNAS]) {
    printf("=== Ingreso de datos para la Matriz A ===\n");
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\n=== Ingreso de datos para la Matriz B ===\n");
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
}

// suma de matrices
void sumaMatriz(int A[FILAS][COLUMNAS], int B[FILAS][COLUMNAS], int Resultado[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            Resultado[i][j] = A[i][j] + B[i][j];
        }
    }
}

// resta de matrices
void restaMatriz(int A[FILAS][COLUMNAS], int B[FILAS][COLUMNAS], int Resultado[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            Resultado[i][j] = A[i][j] - B[i][j];
        }
    }
}

// multiplicación elemento a elemento 
void multiplicacionMatriz(int A[FILAS][COLUMNAS], int B[FILAS][COLUMNAS], int Resultado[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            Resultado[i][j] = A[i][j] * B[i][j];
        }
    }
}

//  visualización de matrices 
void mostrarResultado(const char *titulo, int Matriz[FILAS][COLUMNAS]) {
    printf("\nMatriz Resultante - %s:\n", titulo);
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("%d\t", Matriz[i][j]);
        }
        printf("\n");
    }
}
```
### Resultado por Terminal
<img width="816" height="521" alt="image" src="https://github.com/user-attachments/assets/0fb52b8a-61e2-4107-82ec-fad2397fbe64" />
