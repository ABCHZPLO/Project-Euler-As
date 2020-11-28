#include <stdio.h>

int chn(int asd,int max);

int main(void)
{
    int i,j;
    int asd = 1,max = 1,max2 = 1;

    for ( i = 1; i < 1000; i++)
    {
        for ( j = 1; j < 1000; j++)
        {
            asd *= i*j;
            max = chn(asd,max);

            if(max2 <= max)
            {
              max2 = max;
            }
            asd = 1;
        }
    }
    printf("2‚Â‚Ì3Œ…‚Ì”Žš‚ÌÏ‚©‚çì‚ç‚ê‚½Å‘å‚Ì‰ñ•¶‚Í\n");
    printf("Å‘å’l = %d",max2);

    return 0;
}

int chn(int asd,int max)
{
    int i,j,k,cnt,num10,zxc2 = 0,zxc[100];
    char str[100],str2[100];
    j = 0;

    for ( i = 1;; i *= 10)
    {
        if (i >= asd)
        {
            num10 = i/10;
            break;
        }
    }//ok

    j = 0;
    for ( i = 10; i/10 <= num10; i *= 10)
    {
        cnt = asd % i;
        zxc[j] = cnt / (i/10);
        j++;
    }//ok
    k = j;

    j = 0;

    for ( i = 1;j<k ; i*=10)
    {   
        zxc2 += zxc[j]*num10;
        num10 /= 10;
        j++;
    }

    if (zxc2 == asd)
    {
      printf("asd = %d\n",asd);
      return zxc2;
    }
}