#include <stdio.h>

int main(void)
{
    int cnt = 0;
    int j;
    for (j = 2;; j++)
    {
        for (int i = 2; i <= j; i++)
        {
            if (j == i)
            {
                cnt++;
                break;
            }
            else if (j%i == 0)
            {
                break;
            }
        }
        if (cnt == 10001)
        {
            break;
        }
        
    }
    printf("10001”Ô–Ú‚Ì‘f”‚Í %d",j);

    return 0;
}