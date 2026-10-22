#include <stdio.h>

#define COEFF 100

int main() {
    int length;

    while (printf("Введите число: "), scanf("%i", &length) == 1) {
        
        if (length <= 0) { 
            printf("Вы успешно вышли из программы\n");
            return 0;
        } 
        
        printf("Сконвертировано: %d м %d см\n", length / COEFF, length % COEFF);
    }

    printf("\nВвод завершен (получен сигнал EOF или некорректный символ).\n");
    return 0;
}

