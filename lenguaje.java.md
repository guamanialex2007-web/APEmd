⬅️ [Volver al indice](../README.md)
 
 ```java
import java.util.Scanner;

public class OperacionesMatrices {

    // Constantes para definir las dimensiones de las matrices (2 filas, 3 columnas)
    private static final int FILAS = 2;
    private static final int COLUMNAS = 3;

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Declaración de arreglos bidimensionales (matrices)
        int[][] A = new int[FILAS][COLUMNAS];
        int[][] B = new int[FILAS][COLUMNAS];
        int[][] Suma = new int[FILAS][COLUMNAS];
        int[][] Resta = new int[FILAS][COLUMNAS];
        int[][] Multiplicacion = new int[FILAS][COLUMNAS];

        // 1. Lectura e ingreso de datos
        completarMatrices(scanner, A, B);

        // 2. Procesamiento modular de operaciones
        sumaMatriz(A, B, Suma);
        restaMatriz(A, B, Resta);
        multiplicacionMatriz(A, B, Multiplicacion);

        // 3. Muestra de resultados
        mostrarResultado("Suma (A + B)", Suma);
        mostrarResultado("Resta (A - B)", Resta);
        mostrarResultado("Multiplicación Elemento a Elemento (A * B)", Multiplicacion);

        scanner.close();
    }

    /**
     * Solicita e ingresa los datos */
    public static void completarMatrices(Scanner scanner, int[][] A, int[][] B) {
        System.out.println("=== Ingreso de datos para la Matriz A ===");
        for (int i = 0; i < FILAS; i++) {
            for (int j = 0; j < COLUMNAS; j++) {
                System.out.printf("A[%d][%d]: ", i, j);
                A[i][j] = scanner.nextInt();
            }
        }

        System.out.println("\n=== Ingreso de datos para la Matriz B ===");
        for (int i = 0; i < FILAS; i++) {
            for (int j = 0; j < COLUMNAS; j++) {
                System.out.printf("B[%d][%d]: ", i, j);
                B[i][j] = scanner.nextInt();
            }
        }
    }

    /**
     * Realiza la suma elemento a elemento */
    public static void sumaMatriz(int[][] A, int[][] B, int[][] Resultado) {
        for (int i = 0; i < FILAS; i++) {
            for (int j = 0; j < COLUMNAS; j++) {
                Resultado[i][j] = A[i][j] + B[i][j];
            }
        }
    }

    /**
     * Realiza la resta elemento a elemento */
    public static void restaMatriz(int[][] A, int[][] B, int[][] Resultado) {
        for (int i = 0; i < FILAS; i++) {
            for (int j = 0; j < COLUMNAS; j++) {
                Resultado[i][j] = A[i][j] - B[i][j];
            }
        }
    }

    /**
     * Realiza la multiplicación elemento a elemento */
    public static void multiplicacionMatriz(int[][] A, int[][] B, int[][] Resultado) {
        for (int i = 0; i < FILAS; i++) {
            for (int j = 0; j < COLUMNAS; j++) {
                Resultado[i][j] = A[i][j] * B[i][j];
            }
        }
    }

    /**
     * Muestra en consola */
    public static void mostrarResultado(String titulo, int[][] Matriz) {
        System.out.println("\nMatriz Resultante - " + titulo + ":");
        for (int i = 0; i < FILAS; i++) {
            for (int j = 0; j < COLUMNAS; j++) {
                System.out.print(Matriz[i][j] + "\t");
            }
            System.out.println();
        }
    }
}
