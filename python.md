⬅️ [Volver al indice](./README.md)

```python

# Constantes globales para las dimensiones de las matrices (2 filas x 3 columnas)
FILAS = 2
COLUMNAS = 3


def completar_matrices():
    """Solicita e ingresa los datos numéricos para la Matriz A y la Matriz B de forma segura."""
    print("=== Ingreso de datos para la Matriz A ===")
    matriz_a = []
    for i in range(FILAS):
        fila = []
        for j in range(COLUMNAS):
            while True:
                try:
                    valor = int(input(f"A[{i}][{j}]: "))
                    fila.append(valor)
                    break
                except ValueError:
                    print("  [Error] Por favor, ingrese un número entero válido.")
        matriz_a.append(fila)

    print("\n=== Ingreso de datos para la Matriz B ===")
    matriz_b = []
    for i in range(FILAS):
        fila = []
        for j in range(COLUMNAS):
            while True:
                try:
                    valor = int(input(f"B[{i}][{j}]: "))
                    fila.append(valor)
                    break
                except ValueError:
                    print("  [Error] Por favor, ingrese un número entero válido.")
        matriz_b.append(fila)

    return matriz_a, matriz_b


def suma_matriz(A, B):
    """Suma término a término dos matrices de la misma dimensión."""
    return [
        [A[i][j] + B[i][j] for j in range(COLUMNAS)]
        for i in range(FILAS)
    ]


def resta_matriz(A, B):
    """Resta término a término dos matrices (A - B)."""
    return [
        [A[i][j] - B[i][j] for j in range(COLUMNAS)]
        for i in range(FILAS)
    ]


def multiplicacion_matriz(A, B):
    """Realiza la multiplicación elemento a elemento (Producto de Hadamard)."""
    return [
        [A[i][j] * B[i][j] for j in range(COLUMNAS)]
        for i in range(FILAS)
    ]


def division_matriz(A, B):
    """
    Divide término a término la matriz A entre B.
    Incluye validación para evitar división entre cero.
    """
    resultado = []
    for i in range(FILAS):
        fila = []
        for j in range(COLUMNAS):
            if B[i][j] != 0:
                fila.append(A[i][j] / B[i][j])
            else:
                fila.append(0.0)  # Evita crash por ZeroDivisionError
        resultado.append(fila)
    return resultado


def mostrar_resultado(titulo, matriz, es_flotante=False):
    """
    Imprime en consola una matriz formateada con tabulaciones.
    Soporta formato especial para valores enteros y flotantes.
    """
    print(f"\nMatriz Resultante - {titulo}:")
    for fila in matriz:
        for elemento in fila:
            if es_flotante:
                print(f"{elemento:.2f}\t", end="")
            else:
                print(f"{elemento}\t", end="")
        print()


def main():
    """Función principal que coordina el flujo de control del programa."""
    # 1. Ingreso de datos
    A, B = completar_matrices()

    # 2. Procesamiento modular de operaciones
    Suma = suma_matriz(A, B)
    Resta = resta_matriz(A, B)
    Multiplicacion = multiplicacion_matriz(A, B)
    Division = division_matriz(A, B)

    # 3. Presentación de resultados
    mostrar_resultado("Suma (A + B)", Suma)
    mostrar_resultado("Resta (A - B)", Resta)
    mostrar_resultado("Multiplicación Elemento a Elemento (A * B)", Multiplicacion)
    mostrar_resultado("División Elemento a Elemento (A / B)", Division, es_flotante=True)


# Punto de entrada del script
if __name__ == "__main__":
    main()
