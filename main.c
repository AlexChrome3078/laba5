#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>

double calculate_u(double x, double y, double z);

int main()
{
    double x;
    const double y = 0.75e-4;
    const double z = 0.845e2;
    double u;

    setlocale(LC_ALL, "RUS");

    printf("Введите x: ");
    if (scanf("%lf", &x) != 1)
    {
        printf("Ошибка ввода.\n");
        return 1;
    }

    u = calculate_u(x, y, z);

    printf("x = %.4f\n", x);
    printf("u = %.4f\n", u);

    return 0;
}

double calculate_u(double x, double y, double z)
{
    double difference = fabs(x - y);

    return cbrt(8.0 + pow(difference, 2.0) + 1.0)
           / (x * x + y * y + 2.0)
           - exp(difference) * pow(tan(z) * tan(z) + 1.0, x);
}
