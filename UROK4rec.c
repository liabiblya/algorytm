
#include <stdio.h>

void recPerevod(int n) // 1.перевод чисел из десятичной системы в двоичную
{
    if(n != 0)
    {recPerevod(n/2);
    }
    else return;

    printf("%d", n % 2);
    return;
}

int recStepen(int x, int n) // 2.функция возведения числа [a] в степень [b]
 {
    if(n == 0) return 1;
    if(n < 0) return recStepen( 1 / x, -n);
    if(n % 2) return x * recStepen(x, n - 1);
    return recStepen(x * x, n / 2);
 }

int main(const int argc, const char** argv)
{
    recPerevod(69);
    printf("\n%d", recStepen(2,6));

    return 0;
}

