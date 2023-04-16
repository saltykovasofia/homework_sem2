#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Функция для поиска элемента в двумерном массиве
int find_el(int arr[][3], int rows, int columns, int el) {
    int row = -1, col = -1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (arr[i][j] == el) {
                row = i;
                col = j;
                break;
            }
        }
        if (row >= 0) {
            break;
        }
    }
    if (row >= 0) {
        printf("Элемент %d найден в строке %d, столбце %d\n", el, row, col);
    } else {
        printf("Элемент %d не найден в массиве\n", el);
    }
}

int main() {
    srand(time(NULL));
    int arr[3][3];
    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]);

    // Заполнение массива
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = rand() % 10;
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Запрос элемента, который надо найти
    int el;
    printf("Введите элемент, который необходимо найти: ");
    scanf("%d", &el);

    // Поиск элемента в массиве
    find_el(arr, rows, cols, el);

    return 0;
}
