#include <stdio.h>

int main(void)
{
    int i,imax = 0;
    int euler[19],cnt = 0;

    for ( i = 0;i < 19 ; i++)
    {
        euler[i] = i+2;
    }//euler[20]�ɂP�`�Q�O�܂ł���
    
    for ( i = 2;; i++)//232792560
    {
        for (int j = 0; j <19; j++)
        {
            if (i%euler[j] != 0)
            {
              //printf("euler[%d] = %d\n",j,euler[j]);
              //printf("%d\n",j);
                cnt = 0;
                break;
            }
            else if (i%euler[j] == 0){
                cnt++;
                //printf("%d\n",cnt);
            }

            if(cnt == 19){
              printf("1����20�܂ł̂��ׂĂ̐��ŋϓ��Ɋ���؂��ŏ��̐��̐���%d\n",i);
              return 1;
            }
        }
           
    }
    return 0;
}