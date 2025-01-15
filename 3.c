#include <stdio.h>
#include <string.h>

int main() {
    //1
    char str1[100], str2[100];
    printf("Введите первую строку: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Введите вторую строку: ");
    fgets(str2, sizeof(str2), stdin);
    strcspn(str1, "\n");
    strcspn(str2, "\n");
    if (strcmp(str1, str2) == 0) {
        printf("Strings match\n");
    } else {
        printf("Strings differ\n");
    }

    //2
    int r2, boundary_min = 10, boundary_max = 20;
    printf("Введите число: ");
    scanf("%d", &r2);
    if (r2 < boundary_min || r2 > boundary_max) {
        printf("Outside the boundary (10..20)\n");
    } else {
        printf("Inside the boundary\n");
    }

    //3
    int r3 = 7;
    switch (r3) {
        case 3: printf("Number is 3\n"); break;
        case 7: printf("Number is 7\n"); break;
        case 9: printf("Number is 9\n"); break;
        default: printf("Number not found\n"); break;
    }

    //4
    int num1, num2, num3;
    printf("Введите три числа: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    int r4 = num1 < num2 ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3);
    if (num1 == num2 && num2 == num3) {
        printf("All numbers are equal\n");
    } else {
        printf("Smallest number: %d\n", r4);
    }

    //5
    int r5;
    printf("Введите число: ");
    scanf("%d", &r5);
    if (r5 % 2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }

    //6
    int r6;
    printf("Введите число: ");
    scanf("%d", &r6);
    if (r6 == 0) {
        printf("Zero\n");
    } else if (r6 > 0) {
        printf("Positive\n");
    } else {
        printf("Negative\n");
    }

    //7
    int r7;
    printf("Введите оценку: ");
    scanf("%d", &r7);
    if (r7 >= 90 && r7 <= 100) {
        printf("Excellent\n");
    } else if (r7 >= 75 && r7 < 90) {
        printf("Good\n");
    } else if (r7 >= 50 && r7 < 75) {
        printf("Satisfactory\n");
    } else {
        printf("Unsatisfactory\n");
    }

    //8
    int r8, year;
    printf("Введите номер месяца: ");
    scanf("%d", &r8);
    printf("Введите год: ");
    scanf("%d", &year);
    int days;
    switch (r8) {
        case 1: days = 31; break;
        case 2:
            days = (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? 29 : 28;
            break;
        case 3: days = 31; break;
        case 4: days = 30; break;
        case 5: days = 31; break;
        case 6: days = 30; break;
        case 7: days = 31; break;
        case 8: days = 31; break;
        case 9: days = 30; break;
        case 10: days = 31; break;
        case 11: days = 30; break;
        case 12: days = 31; break;
        default: { printf("unexpected year"); return 1;} break;
    }
    printf("Количество дней в месяце: %d\n", days);

    return 0;
}
