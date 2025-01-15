#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    // 1
    int n;
    printf("Введите число n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Hello World!\n");
    }
    printf("\n");

    // 2
    int a, b;
    printf("Введите диапазон a и b: ");
    scanf("%d %d", &a, &b);
    if (a > b){
        for (int i = b; i <= a; i++) {
            if (i % 2 != 0) {
                printf("%d ", i);
            }
        }
    } else {
        for (int i = a; i <= b; i++) {
            if (i % 2 != 0) {
                printf("%d ", i);
            }
        }
    }
    printf("\n");

    // 3
    int wall;
    printf("Введите сторону ромба n: ");
    scanf("%d", &wall);
    for (int i = 1; i <= wall; i++) {
        for (int j = 0; j < wall - i; j++) printf(" ");
        for (int k = 0; k < 2 * i - 1; k++) printf("*");
        printf("\n");
    }
    for (int i = wall - 1; i > 0; i--) {
        for (int j = 0; j < wall - i; j++) printf(" ");
        for (int k = 0; k < 2 * i - 1; k++) printf("*");
        printf("\n");
    }

    // 4
    int h, w;
    printf("Введите высоту и ширину прямоугольника: ");
    scanf("%d %d", &h, &w);
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            printf("*");
        }
        printf("\n");
    }

    // 5
    char op;
    double num1, num2;
    do {
        printf("Введите операцию (+, -, *, /) или 'q' для выхода: ");
        scanf(" %c", &op);
        if (op == 'q') break;
        printf("Введите два числа: ");
        scanf("%lf %lf", &num1, &num2);
        switch (op) {
            case '+': printf("Результат: %.2f\n", num1 + num2); break;
            case '-': printf("Результат: %.2f\n", num1 - num2); break;
            case '*': printf("Результат: %.2f\n", num1 * num2); break;
            case '/':
                if (num2 != 0)
                    printf("Результат: %.2f\n", num1 / num2);
                else
                    printf("Ошибка: деление на ноль!\n");
                break;
            default: printf("Неверная операция!\n");
        }
    } while (op != 'q');

    // 6 - из файла
    int arr[100];
    int n1;
    printf("Введите количество элементов массива: ");
    scanf("%d", &n1);
    printf("Введите элементы массива: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Массив: ");
    for (int i = 0; i < n1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 7
    int n2;
    srand(time(NULL));
    printf("Введите размер массива: ");
    scanf("%d", &n2);
    int random_arr[n2];
    for (int i = 0; i < n2; i++) {
        random_arr[i] = rand() % 100; // случайное число от 0 до 99
    }
    printf("Случайный массив: ");
    for (int i = 0; i < n2; i++) {
        printf("%d ", random_arr[i]);
    }
    printf("\n");

    // 8
    int size;
    printf("Введите размер массива: ");
    scanf("%d", &size);  // исправлено на int
    float arr2[(int)size];
    printf("Введите элементы массива: ");
    for (int i = 0; i < size; i++) {
        scanf("%f", &arr2[i]);
    }
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr2[i];
    }
    printf("Сумма элементов массива: %.2f\n", sum);

    // 9
    char str2[100];
    printf("Введите строку: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // исправлено удаление символа новой строки
    for (int i = strlen(str2) - 1; i >= 0; i--) {
        printf("%c", str2[i]);
    }

    // 10
    float a3, b3;
    printf("Введите a и b: ");
    scanf("%f %f", &a3, &b3);
    while (getchar() != '\n'); // очистка ввода

    if (b3 != 0)
        printf("Результат деления: %.2f\n", a3 / b3);
    else
        printf("Ошибка: деление на ноль!\n");

    printf("\n");
    // 11
    char str3[100];
    printf("Введите строки (пустая строка завершает ввод):\n");
    while (1) {
        fgets(str3, sizeof(str3), stdin);
        str3[strcspn(str3, "\n")] = '\0';
        if (strlen(str3) == 0) break;
        for (int i = 0; str3[i] != '\0'; i++) {
            str3[i] = toupper(str3[i]);
        }
        printf("%s\n", str3);
    }

    return 0;
}
