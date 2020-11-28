#include <stdio.h>

int main(void)
{
    int num1 = 1,num2 = 2,asd = 0;
    int sum = 2;

    printf("初めの二項を1,2とする、\n");

    for (int i = 1; ; i++)
    {
      
        asd += num1 + num2;
        if (asd%2 == 0)
        {
            sum += asd;
        }
        printf("%d %d %d\n",asd,num1,num2);
        num1 = num2;
        num2 = asd;

        if (asd > 4000000){
          break;
        }
        asd = 0; 
    }
    
    printf("フィボナッチ数列の400万以下の偶数の項の値は%dです。\n",sum);//4613732
    return 0;
}