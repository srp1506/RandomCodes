#include<stdio.h>
void dtob(int n)
{
	while (n)
	{
		printf("%d",n%2);
		n/=2;
	}
	printf("\n");
}
int main()
{
	int n;
	printf("Enter The Decimal Number:\n>");
	scanf("%d",&n);
	printf("The Binary Representation Is:\n>");
	dtob(n);
	return 0;
}
