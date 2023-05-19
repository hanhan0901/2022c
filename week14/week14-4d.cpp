#include <stdio.h>
int main(){
int n,m =1,r;
scanf("%d",&n);
while(n>0){
r=n%10;
n=n/10;
printf("%d ",r*m);

m *= 10;
}
return 0;
}
