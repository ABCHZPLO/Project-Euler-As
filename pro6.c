#include <stdio.h>

int main(void)
{
    int asd = 0,cvb = 0;

    for (int i = 1; i <= 100; i++)
    {
        asd += i*i;
        cvb += i;
    }

    printf("Å‰‚Ì100ŒÂ‚ÌŽ©‘R”‚Ì2æ‚Ì‡Œv‚Æ‡Œv‚Ì2æ‚Ì·‚Í %d",(cvb*cvb)-asd);
    
    return 0;
}