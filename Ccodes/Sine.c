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
int factorial(int n)
{
	if (n==0 || n==1)
		return 1;
	return n*factorial(n-1);
}
double sine(double x,int n)
{
	double r=0;
	for (int i=1;i<n;i=i+2)
	{
		if (i%4==1)
			r+=(pow(x,i)/factorial(i));
		else if (i%4==3)
			r-=(pow(x,i)/factorial(i));
	}
	return r;
}
int main()
{
	double x;
	int n;
	printf("Enter The Value Of Theta And The Degree Of Accuracy:\n>");
	scanf("%lf%d",&x,&n);
	printf("sinx=%lf\n",sine(x,n));
	return 0;
}
