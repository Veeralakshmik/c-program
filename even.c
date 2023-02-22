#include<stdio.h>
void main()
{
	int n,i;
	i=1;
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==0)
		printf("\neven=%d",i);
		i++;
	}
}
