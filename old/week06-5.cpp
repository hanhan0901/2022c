#include <stdio.h>
int main()
{

    int a=10;

    if (-999 ) printf("-999成立\n");
    if (-3 ) printf("-3成立\n");
    if (-2 ) printf("-2成立\n");
    if  (-1 ) printf("-1成立\n");
    if ( 0 ) printf("0成立,所以什麼都沒印\n");
    if ( 1 ) printf("1成立\n");
    if ( 2 ) printf("2成立\n");
    if ( 3 ) printf("3成立\n");
    if ( 4 ) printf("4成立\n");
    if ( 999 ) printf("999成立\n");
    if ("a==0") printf("不管什麼東西,幾乎都成立\n");
}
