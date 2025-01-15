#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main() {
    //1
    printf("Привет, мир!\n");
    //2
    int number;
    char symbol;
    double decimal;
    //3
    int number2 = 42;
    char symbol2 = 'A';
    double decimal2 = 2.71828;
    //4
    printf("Символ: %c, Целое число: %d, Десятичное число: %.5f\n", symbol2, number2, decimal2);
    //5
    float some_f = 1.2345;
    printf("Значение переменной float: %.4f\n", some_f);
    //6
    int f1 = 100;
    int f2 = 250;
    printf("%d\n", f1+f2);
    // 7
    srand(time(NULL));

    char s = 'A' + (rand() % 26);
    int i = rand() % 100;
    float f = (rand() % 10000) / 100.0;
    double d = (rand() % 100000) / 1000.0;

    printf("Значения: символ: %c, число: %d, число с плавающей точкой: %.2f, число с двойной точностью: %.3f\n", s, i, f, d);

    // 8
    bool b = true;
    printf("Переменная является истинной: %s\n", b ? "true" : "false");
    printf("Lorem ipsum dolor sit amet,\nConsectetur adipiscing elit.\nSed do eiusmod tempor incididunt,\nUt labore et dolore magna aliqua.\n");

    return 0;
}
