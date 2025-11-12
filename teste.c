#include <stdio.h>
#include <stdlib.h>

/*--------------------- FUNÇÃO IMPRESSÃO -------------------*/
void imprimir(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

/* ---------------------- QUICK SORT ---------------------- */
void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int particionar(int v[], int baixo, int alto) {
    int pivo = v[alto];
    int i = baixo - 1;

    for (int j = baixo; j < alto; j++) {
        if (v[j] <= pivo) {
            i++;
            trocar(&v[i], &v[j]);
        }
    }
    trocar(&v[i + 1], &v[alto]);
    return i + 1;
}

void quickSort(int v[], int baixo, int alto) {
    if (baixo < alto) {
        int pi = particionar(v, baixo, alto);
        quickSort(v, baixo, pi - 1);
        quickSort(v, pi + 1, alto);
    }
}

/* ---------------------- BUBBLE SORT ---------------------- */
void bubbleSort(int v[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                trocar(&v[j], &v[j + 1]);
            }
        }
    }
}

/* ---------------------- SELECTION SORT ---------------------- */
void selectionSort(int v[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (v[j] < v[min_idx])
                min_idx = j;
        }
        trocar(&v[min_idx], &v[i]);
    }
}

/* ---------------------- MAIN ---------------------- */
int main() {
    int original[] = {4, 5, 5, 3, 0, 0, 8, 4};
    int n = sizeof(original) / sizeof(original[0]);

    int v1[8], v2[8], v3[8];

    // Copia do vetor original para cada método
    for (int i = 0; i < n; i++) {
        v1[i] = original[i];
        v2[i] = original[i];
        v3[i] = original[i];
    }

    printf("RGM: ");
    imprimir(original, n);

    // Quick Sort
    quickSort(v1, 0, n - 1);
    printf("\nQuick Sort:     ");
    imprimir(v1, n);

    // Bubble Sort
    bubbleSort(v2, n);
    printf("Bubble Sort:    ");
    imprimir(v2, n);

    // Selection Sort
    selectionSort(v3, n);
    printf("Selection Sort: ");
    imprimir(v3, n);

    return 0;
}
