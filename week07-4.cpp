#include <stdio.h>
int main()
{
    int n=1234;
    printf("�@�d����:%d�i\n",n/1000);
    n=n%1000;
    printf("�@�ʤ���:%d�i\n",n/100);
    n=n%100;
    printf("�Q����:%d�i\n",n/10);
    n=n%10;
    printf("�@����%d�T\n",n);
}
