#include<stdio.h>
double pow(double x,int n)
{
	double r=x;
	if (x!=0 && n==0)
		return 1;
	if (x!=0 && n<0)
	{
		x=1/x;
	}
	while (--n)
	{
		r*=x;
	}
	return r;
}
int main()
{
	double x;
	int n,i;
	printf("Enter The Value Of The Number, The Order Of The Root And The Number Of Iterations:\n>");
	scanf("%lf%d%d",&x,&n,&i);
	double guess=x/n;
	while (i--)
	{
		double correction=((pow(guess,n)-x)/(n*pow(guess,n-1)));
		guess-=correction;
	}
	printf("%.15lf\n",guess);
	return 0;
}
