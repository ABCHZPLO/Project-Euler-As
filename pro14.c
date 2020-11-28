#include <stdio.h>
#define NUM 1000000

long long int EOnum(long long int x)
{
    if (x%2 == 0)
    {
        return x/2;
    }
    else
    {
        return 3*x+1;
    }
}

int main(void)
{
    long long int count = 1,max = 1,i_max = 0;
    long long int i = 1,j;

    printf("%d万未満の整数からできるコラッタ予想で最長の数列の項数は",NUM);

    while (i < NUM)
    {   printf("%lld\n",i);
        for ( j = i;j != 1;)
        {
            j = EOnum(j);
            count++;
        }
        
        if (max < count)
        {
            max = count;
            i_max = i;
        }
        i++;
        count = 1;
    }
    printf("max = %lld",i_max);
    
    return 0;
}