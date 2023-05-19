#include <stdio.h>
int main()
{
	char ch;
	int a=0;
	while(ch=getchar(),ch!='\n')
	a=a*2+(ch-'0');
	printf("%d\n",a);
	return 0;
	}
