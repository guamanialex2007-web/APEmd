#include <stdio.h>

// Llena una matriz de 2x3 solicitando los datos al usuario desde consola
void completarMatrices(const char* n, int M[2][3]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%s[%d][%d]: ", n, i, j);
            scanf("%d", &M[i][j]);
        }
    }
}

//  suma de dos matrices elemento por elemento
void sumaMatriz(int A[2][3], int B[2][3], int R[2][3]) {
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            R[i][j] = A[i][j] + B[i][j];
}

// a resta de dos matrices (A - B) elemento por elemento
void restaMatriz(int A[2][3], int B[2][3], int R[2][3]) {
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            R[i][j] = A[i][j] - B[i][j];
}

//  multiplicación de dos matrices elemento por elemento
void multiplicacionMatriz(int A[2][3], int B[2][3], int R[2][3]) {
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            R[i][j] = A[i][j] * B[i][j];
}

// Muestra en consola la matriz resultante 
void mostrarResultado(const char* t, int M[2][3]) {
    printf("\n%s:\n", t);
    for (int i = 0; i < 2; i++) {
        printf("[ ");
        for (int j = 0; j < 3; j++) printf("%4d ", M[i][j]);
        printf("]\n");
    }
}

int main() {
    // Definición de estructuras de datos estáticas 
    int A[2][3], B[2][3], S[2][3], R[2][3], M[2][3];
    
    // Bloque secuencial de ejecución modular
    completarMatrices("A", A);
    completarMatrices("B", B);
    
    sumaMatriz(A, B, S);
    restaMatriz(A, B, R);
    multiplicacionMatriz(A, B, M);
    
    mostrarResultado("Suma", S);
    mostrarResultado("Resta", R);
    mostrarResultado("Multiplicación", M);
    
    return 0;
}
