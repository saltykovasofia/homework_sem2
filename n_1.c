#include <stdio.h>

// Функция для поиска максимальной длины непрерывной последовательности, состоящей из введеного символа
int find_longest(char array[], int size, char sym) {  
    int max_len = 0;                                
    int current_len = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == sym) {
            current_len++;
            if (current_len > max_len) {
                max_len = current_len;
            }
        } else {
            current_len = 0;
        }
    }
    return max_len;
}

int main(){             
    char sym;
    char array[12] = {'H', 'e', 'e', 'e', 'e', 'l', 'l', 'l', 'o', 'o', 'l', '\0'};
    int size = sizeof(array)/sizeof(array[0]);
    printf ("Введите символ: \n");
    scanf ("%c", &sym);
     
    int res = find_longest (array, size, sym);

    if (res == 0) {
        printf ("Ваш символ не найден!");
    }
    else {
        printf ("%d", res);
    }

    return 0;
}

//
