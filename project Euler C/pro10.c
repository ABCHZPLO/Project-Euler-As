#include <stdio.h>
#define NUM 2000000

int main(void)
{
    long long int sum = 0;
    int i,j;

    for (i = 2;i < NUM; i++)
    {
        printf("%d\n",i);
        for (j = 2; j <= i; j++)
        {
            if (i == j)
            {
                //printf("%d\n",i);
                sum += i;
                break;
            }
            else if (i%j == 0)
            {
                break;
            }
        }
        
    }
    printf("%d–¢–ž‚Ì‚·‚×‚Ä‚Ì‘f”‚Ì‡Œv‚Í %lld\n",NUM,sum);//142913828922
    
    return 0;
}