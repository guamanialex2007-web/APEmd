#include <stdio.h>

int main() {
    int A[2][3], B[2][3];
    int Suma[2][3], Resta[2][3], Multiplicacion[2][3];

    printf("Ingreso de datos para la Matriz A:\n");
    for (int fila = 0; fila < 2; fila++) {
        for (int columna = 0; columna < 3; columna++) {
            printf("A[%d][%d]: ", fila, columna);
            scanf("%d", &A[fila][columna]);
        }
    }

    printf("\nIngreso de datos para la Matriz B:\n");
    for (int fila = 0; fila < 2; fila++) {
        for (int columna = 0; columna < 3; columna++) {
            printf("B[%d][%d]: ", fila, columna);
            scanf("%d", &B[fila][columna]);
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            Suma[i][j] = A[i][j] + B[i][j];
            Resta[i][j] = A[i][j] - B[i][j];
            Multiplicacion[i][j] = A[i][j] * B[i][j];
        }
    }

    printf("\nSuma:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", Suma[i][j]);
        }
        printf("\n");
    }

    return 0;
}
---
[⬅️ Volver al Índice Principal](./README.md)
