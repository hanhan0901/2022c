
#include <stdio.h>
int main()
{
int nn ;
int sum = 0;
scanf("%d", &nn);
if(nn>=1 && nn<=9){
for(int i=1;i<=nn;i++){

int tern = i*11;
sum+=tern;
}
printf("%d",sum);
}
}
