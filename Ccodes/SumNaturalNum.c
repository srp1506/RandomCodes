#include<stdio.h>
int sum(int n)
{
	if (n==1)
	{
		return 1;
	}
	return n+sum(n-1);
}
int main()
{
	int n;
	printf("Enter The Value Of n:\n");
	scanf("%d",&n);
	printf("The Sum Of N Natural Numbers Is:%d\n",sum(n));
	return 0;
}
