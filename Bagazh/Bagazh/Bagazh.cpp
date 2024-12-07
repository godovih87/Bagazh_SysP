#define _CRT_SECURE_NO_WARNINGS //штука для того чтобы файл окрывался в небезопасном режиме(функция fopen небезопасна)
#include <stdio.h>

int main() {
    FILE* file;
    int quantity;
    float weight;

    file = fopen("C:\\Users\\FostersPC\\Desktop\\Bagazh\\Bagazh.txt", "r");
    if (file == NULL) {
        printf("Невозможно открыть файл!\n");
        return 1;
    }

    printf("Пассажиры с более чем двумя вещами:\n");

    while (fscanf(file, "%d %f", &quantity, &weight) == 2) {
        if (quantity > 2) {
            printf("Количество вещей: %d, Вес багажа: %.2f кг\n", quantity, weight);
        }
    }

    fclose(file);
    return 0;
}
