#include <stdio.h>
#define NUM 500

int main(void)
{
    int cnt = 0;
    int asd = 0,max = 0,end = 0;

    for (int i = 1; ; i++)
    {
        cnt += i;
        for (int j = 1;; j++)
        {
            if (cnt%j == 0)
            {
              asd++;
              printf("�O�p�� = %d\n",cnt);
              //printf("���� = %d\n",i);
              //printf("�� = %d\n\n",asd);
            }
            
            if (NUM <= asd)
            {
                printf("%d�̖񐔂����O�p���� %d�ł��B\n",NUM,cnt);//76576500
                return 1;
            }
            
            if (cnt == j)
            {
                asd = 0;
                break;
            }
            
        }
    }

    return 0;
}