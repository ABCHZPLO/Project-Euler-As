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
    
    printf("3‚Ü‚½‚Í5‚Ì‚·‚×‚Ä‚Ì”{”‚Ì‡Œv‚Í%d‚Å‚·B\n",sum);

    return 0;
}