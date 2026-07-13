import java.util.Scanner;

public class Main {
    // Instancia única del Scanner para optimizar la lectura de flujos de entrada
    private static final Scanner sc = new Scanner(System.in);

    // Método para inicializar y poblar una matriz estática de 2x3
    public static int[][] completarMatrices(String n) {
        int[][] M = new int[2][3];
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 3; j++) {
                System.out.print(n + "[" + i + "][" + j + "]: ");
                M[i][j] = sc.nextInt();
            }
        return M;
    }

    // Calcula de forma matemática la adición iterativa elemento por elemento
    public static int[][] sumaMatriz(int[][] A, int[][] B) {
        int[][] R = new int[2][3];
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 3; j++) R[i][j] = A[i][j] + B[i][j];
        return R;
    }

    // Calcula la diferencia aritmética lineal entre estructuras correspondientes
    public static int[][] restaMatriz(int[][] A, int[][] B) {
        int[][] R = new int[2][3];
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 3; j++) R[i][j] = A[i][j] - B[i][j];
        return R;
    }

    // Ejecuta el producto de Hadamard (multiplicación elemento por elemento de misma posición)
    public static int[][] multiplicacionMatriz(int[][] A, int[][] B) {
        int[][] R = new int[2][3];
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 3; j++) R[i][j] = A[i][j] * B[i][j];
        return R;
    }

    // Imprime la matriz formateando el espaciado para alineación de columnas
    public static void mostrarResultado(String t, int[][] M) {
        System.out.println("\n" + t + ":");
        for (int[] f : M) {
            System.out.print("[ ");
            for (int x : f) System.out.printf("%4d ", x);
            System.out.println("]");
        }
    }

    public static void main(String[] args) {
        // Inicialización y procesamiento de datos bajo enfoque modular
        int[][] A = completarMatrices("A");
        int[][] B = completarMatrices("B");
        
        mostrarResultado("Suma", sumaMatriz(A, B));
        mostrarResultado("Resta", restaMatriz(A, B));
        mostrarResultado("Multiplicación", multiplicacionMatriz(A, B));
    }
}
