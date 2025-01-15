#include <stdio.h>
#include <math.h>

int main() {
    //1
    int x = 10, y = 5;
    int r1 = x - y;
    printf("Разность: %d\n", r1);

    //2
    x = 6, y = 7;
    int r2 = x * y;
    printf("Произведение: %d\n", r2);

    //3
    x = 2, y = 2;
    int r3 = x + y;
    printf("Результат: %d\n", r3);

    //4
    int num1 = 25, num2 = 10;
    r1 = num1 - num2;
    float r4 = (float)num1 / num2;
    printf("Разность: %d\n", r1);
    printf("Частное: %.2f\n", r4);

    //5
    float a = 12.5, b = 2.3;
    float r5 = fmod(a, b);
    printf("Остаток от деления: %.2f\n", r5);

    //6
    int age1 = 25, age2 = 35;
    float r6 = (age1 + age2) / 2.0;
    printf("Средний возраст: %.2f\n", r6);

    //7
    int c = 15;
    int r7 = a + b + c;
    printf("Сумма: %d\n", r7);
    double r71 = r7 / 3.00;
    printf("Среднее арифметическое: %.2f\n", r71);

    //8
    x = 8, y = 4;
    int r81 = x - y;
    int r82 = x * y;
    float r83 = (float)x / y;
    printf("Разность: %d\n", r81);
    printf("Произведение: %d\n", r82);
    printf("Частное: %.2f\n", r83);

    //9
    float r91 = 20.0, r92 = 4.0, r93 = 6.0;
    float r94 = r91 + r93;
    printf("Первая: %.1f, Вторая: %.1f, Третья: %.1f, Четвертая: %.1f\n", r91, r92, r93, r94);

    //10
    x = 3, y = 4;
    float r10 = sqrt(pow(x,2)  + pow(y, 2));
    printf("Расстояние: %.2f\n", r10);

    return 0;
}
