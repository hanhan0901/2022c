#include <stdio.h>
int main()
{
int k;
scanf("%d",&k);

int sum =0;
int n = 1;

while(sum<=k){
sum+=n;
n++;
}

printf("%d",n-1);
return 0;
}

