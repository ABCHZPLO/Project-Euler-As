#include <stdio.h>

int main(void)
{
    unsigned long int num = 600851475143;
    int i,imax = 0;

    printf("600851475143�̑f�����f�f������");

    for (i = 2; i <= num; i++)
    {
        if (num%i == 0)
        {
            if(imax < i){
              imax = i;
            }

            num /= i;
            i = 2;
        }
        
    }
    printf("%d�ł��B",imax);
}