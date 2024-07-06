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
double natlog(double x,int n)
{
	double r=0;
	for (int i=0;i<n;i++)
	{
		i%2==0?r-=(pow(x,i)/i):(i%2==1?r+=(pow(x,i)/i):printf(""));
	}
	return r;
}
int main()
{
	double x;
	int n;
	printf("Enter x For ln(1+x) And The Number Of Iterations\n>");
	scanf("%lf%d",&x,&n);
	printf("ln(1+x)=%lf\n",natlog(x,n));
	return 0;
}
