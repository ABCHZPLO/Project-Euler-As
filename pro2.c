#include <stdio.h>

int main(void)
{
    int num1 = 1,num2 = 2,asd = 0;
    int sum = 2;

    printf("���߂̓񍀂�1,2�Ƃ���A\n");

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
    
    printf("�t�B�{�i�b�`�����400���ȉ��̋����̍��̒l��%d�ł��B\n",sum);//4613732
    return 0;
}