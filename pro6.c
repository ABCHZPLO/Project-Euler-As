#include <stdio.h>

int main(void)
{
    int asd = 0,cvb = 0;

    for (int i = 1; i <= 100; i++)
    {
        asd += i*i;
        cvb += i;
    }

    printf("最初の100個の自然数の2乗の合計と合計の2乗の差は %d",(cvb*cvb)-asd);
    
    return 0;
}