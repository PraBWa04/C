#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j;
    int *matrix;

    printf("Podaj rozmiar macierzy n x n: ");
    scanf("%d", &n);

    matrix = (int *)malloc(n * n * sizeof(int));
    if (matrix == NULL) {
        printf("Nie udalo sie zaalokowac pamieci.\n");
        return 1;
    }

    printf("Podaj %d elementow macierzy:\n", n * n);
    for (i = 0; i < n * n; i++) {
        scanf("%d", &matrix[i]);
    }

    printf("Elementy macierzy:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i * n + j]);
        }
        printf("\n");
    }

    free(matrix);
    return 0;
}
