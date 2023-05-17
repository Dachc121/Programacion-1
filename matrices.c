include <stdio.h>

#define MAX_FILAS 10
#define MAX_COLUMNAS 10

void sumarMatrices(int matrizA[MAX_FILAS][MAX_COLUMNAS], int matrizB[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas, int resultado[MAX_FILAS][MAX_COLUMNAS]) {
int i, j;

for (i = 0; i < filas; i++) {
for (j = 0; j < columnas; j++) {
resultado[i][j] = matrizA[i][j] + matrizB[i][j];
}
}
}

void mostrarMatriz(int matriz[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas) {
int i, j;

for (i = 0; i < filas; i++) {
for (j = 0; j < columnas; j++) {
printf("%d ", matriz[i][j]);
}
printf("\n");
}
}

int main() {
int matrizA[MAX_FILAS][MAX_COLUMNAS];
int matrizB[MAX_FILAS][MAX_COLUMNAS];
int resultado[MAX_FILAS][MAX_COLUMNAS];
int filas, columnas;
int i, j;

printf("Ingrese el número de filas: ");
scanf("%d", &filas);

printf("Ingrese el número de columnas: ");
scanf("%d", &columnas);

printf("Ingrese los elementos de la matriz A:\n");
for (i = 0; i < filas; i++) {
for (j = 0; j < columnas; j++) {
scanf("%d", &matrizA[i][j]);
}
}

printf("Ingrese los elementos de la matriz B:\n");
for (i = 0; i < filas; i++) {
for (j = 0; j < columnas; j++) {
scanf("%d", &matrizB[i][j]);
}
}

sumarMatrices(matrizA, matrizB, filas, columnas, resultado);

printf("La matriz resultante es:\n");
mostrarMatriz(resultado, filas, columnas);

return 0;
}