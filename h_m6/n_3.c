#include <stdio.h>
#include <stdlib.h>
// Выбран второй вариант решения
// Функция для отображения массива
int print_array(int arr[], int size) {
    printf("Массив:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Функция для добавления элемента в конец массива
int *append(int arr[], int size, int element) {
    int *new_arr = (int *)realloc(arr, (size + 1) * sizeof(int));
    if (new_arr != NULL) {
        new_arr[size] = element;
        return new_arr;
    } else {
        printf("Ошибка при выделении памяти\n");
        return arr;
    }
}

// Функция для вставки элемента в середину массива
int *insert(int arr[], int size, int element, int position) {
    if (position < 0 || position > size) {
        printf("Неверная позиция для вставки элемента\n");
        return arr;
    } else {
        int *new_arr = (int *)realloc(arr, (size + 1) * sizeof(int));
        if (new_arr != NULL) {
            for (int i = size; i > position; i--) {
                new_arr[i] = arr[i - 1];
            }
            new_arr[position] = element;
            return new_arr;
        } else {
            printf("Ошибка при выделении памяти\n");
            return arr;
        }
    }
}

int main() {
    int size;
    printf("Введите количество элементов в массиве: ");
    scanf("%d", &size);

    int *arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Ошибка при выделении памяти\n");
        return 1;
    } else {
        for (int i = 0; i < size; i++) {
            printf("Введите элемент %d: ", i + 1);
            scanf("%d", &arr[i]);
        }

        print_array(arr, size);

        int element;
        printf("Введите элемент, который необходимо добавить в конец массива: ");
        scanf("%d", &element);
        arr = append(arr, size, element);
        size++;
        print_array(arr, size);

        printf("Введите элемент, который необходимо вставить в середину массива: ");
        scanf("%d", &element);
        int position;
        printf("Введите позицию, на которую необходимо вставить элемент: ");
        scanf("%d", &position);
        arr = insert(arr, size, element, position);
        size++;
        print_array(arr, size);

        free(arr);
        return 0;
    }
}