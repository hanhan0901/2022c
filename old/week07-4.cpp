#include <stdio.h>
int main()
{
    int n=1234;
    printf("一千元有:%d張\n",n/1000);
    n=n%1000;
    printf("一百元有:%d張\n",n/100);
    n=n%100;
    printf("十元有:%d張\n",n/10);
    n=n%10;
    printf("一元有%d枚\n",n);
}
