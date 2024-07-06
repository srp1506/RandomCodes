#include<stdio.h>
int factorial(int n)
{
	if (n==1 || n==0)
	{
		return 1;
	}
	return n*factorial(n-1);
}
int main()
{
	int n;
	printf("Enter The Number n:\n");
	scanf("%d",&n);
	printf("n!=%d\n",factorial(n));
	return 0;
}
