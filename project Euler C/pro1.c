#include <stdio.h>

int main(void)
{
    int i;
    int sum = 0;

    for ( i = 3; i < 1000; i++)
    {
       if (i%3 == 0 || i%5 == 0)
       {
           sum += i;
       }
    }
    
    printf("3�܂���5�̂��ׂĂ̔{���̍��v��%d�ł��B\n",sum);

    return 0;
}