#include<stdio.h>
double pow(double x,int n)
{
	if (x!=0 && n==0)
		return 1;
	double r=x;
	while (--n)
	{
		r*=x;
	}
	return r;
}
int main()
{
	int n;
	printf("Enter The Degree Of Accuracy:\n>");
	scanf("%d",&n);
	double e=pow((1+(1/pow(10,n))),pow(10,n));
	printf("%lf\n",e);
	return 0;
}

