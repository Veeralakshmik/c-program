#include<stdio.h>
void main()
{
	int i,odd,even,diff;
	i=1;
	even=odd=0;
	while(i<=10)
	{
		printf("%d",i);
		if(i%2==0)
		even=even+i;
		else
		odd=odd+i;
		i++;
	}
	printf("\neven sum=%d\nodd sum=%d",even,odd);
	printf("difference=%d",diff=even-odd);
}
