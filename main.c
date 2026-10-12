#include <stdio.h>
#include <locale.h>
#include <math.h>

int zad1();
int zad2();
int zad3();

int main()
{
    setlocale(LC_ALL, "RUS");
    zad1();
    /* zad2(); */
    /* zad3(); */
    return 0;
}

int zad1()
{
    const double pi = 3.14159265358979323846;
    double degrees;
    printf("Проверка синуса для 30, 60 и 90 градусов:\n");
    printf("sin(30) = %.6f\n", sin(30.0 * pi / 180.0));
    printf("sin(60) = %.6f\n", sin(60.0 * pi / 180.0));
    printf("sin(90) = %.6f\n", sin(90.0 * pi / 180.0));
    printf("Введите угол в градусах: ");
    if (scanf("%lf", &degrees) != 1) {
        printf("Ошибка ввода.\n");
        return 1;
    }
    printf("sin(%.2f градусов) = %.6f\n", degrees, sin(degrees * pi / 180.0));
    return 0;
}

int zad2()
{
    double x, y;
    printf("Вычисление Y(x) = sqrt(1 + x^2) - 2x - arctg(x)\nВведите x: ");
    if (scanf("%lf", &x) != 1) {
        printf("Ошибка ввода.\n");
        return 1;
    }
    y = sqrt(1.0 + x * x) - 2.0 * x - atan(x);
    printf("Y(%.6f) = %.6f\n", x, y);
    return 0;
}

int zad3()
{
    double x, v;
    printf("Вычисление кусочной функции V(x).\nВведите x: ");
    if (scanf("%lf", &x) != 1) {
        printf("Ошибка ввода.\n");
        return 1;
    }
    if (x < -1.0)
        v = sqrt(1.0 - x) + sin(x);
    else if (x <= 1.0)
        v = x / (1.0 + x * x);
    else
        v = log(x) + exp(-x);
    printf("V(%.6f) = %.6f\n", x, v);
    return 0;
}
