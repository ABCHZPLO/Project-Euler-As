#include <stdio.h>

int main(void)
{
    int asd = 0,cvb = 0;

    for (int i = 1; i <= 100; i++)
    {
        asd += i*i;
        cvb += i;
    }

    printf("�ŏ���100�̎��R����2��̍��v�ƍ��v��2��̍��� %d",(cvb*cvb)-asd);
    
    return 0;
}