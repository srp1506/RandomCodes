#include<stdio.h>
double basel(int n)
{
	if (n==1)
	{
		return 1;
	}
	return (1.0/(n*n))+basel(n-1);
}
int main()
{
	int n;
	printf("Enter The Required Accuracy:\n>");
	scanf("%d",&n);
	printf(">%lf\n",basel(n));
	return 0;
}
