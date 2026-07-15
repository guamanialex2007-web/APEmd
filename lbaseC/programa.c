#include <stdio.h>
void completarMatrices(int Arreglo[2][2][3]) {
    for (int plano = 0; plano < 2; plano++) {
        char nombreMatriz = (plano == 0) ? 'A' : 'B';
        printf("Ingreso de datos para la Matriz %c:\n", nombreMatriz);
        
        for (int fila = 0; fila < 2; fila++) {
            for (int columna = 0; columna < 3; columna++) {
                printf("Matriz %c[%d][%d]: ", nombreMatriz, fila, columna);
                scanf("%d", &Arreglo[plano][fila][columna]);
            }
        }
    }
}

void operarMatrices(int A[2][3], int B[2][3], int R[2][3], char operacion) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            switch (operacion) {
                case '+':
                    R[i][j] = A[i][j] + B[i][j];
                    break;
                case '-':
                    R[i][j] = A[i][j] - B[i][j];
                    break;
                case '*':
                    R[i][j] = A[i][j] * B[i][j];
                    break;
            }
        }
    }
}

void mostrarResultado(const char* titulo, int M[2][3]) {
    printf("\n%s:\n", titulo);
    for (int i = 0; i < 2; i++) {
        printf("[ ");
        for (int j = 0; j < 3; j++) {
            printf("%d\t", M[i][j]);
        }
        printf("]\n");
    }
}

int main() {
    int Datos[2][2][3];
    int Suma[2][3], Resta[2][3], Multiplicacion[2][3];

    completarMatrices(Datos);

    operarMatrices(Datos[0], Datos[1], Suma, '+');
    operarMatrices(Datos[0], Datos[1], Resta, '-');
    operarMatrices(Datos[0], Datos[1], Multiplicacion, '*');

    mostrarResultado("Matriz Suma (A + B)", Suma);
    mostrarResultado("Matriz Resta (A - B)", Resta);
    mostrarResultado("Matriz Multiplicación (A * B)", Multiplicacion);

    return 0;
}

---
[⬅️ Volver al Índice Principal](./README.md)
