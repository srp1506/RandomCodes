#include<stdio.h>
int pow(int x,int n)
{
        int r=x;
        if (n==0 && x!=0)
                return 1;
        else
        {
                for (int i=1;i<n;i++)
                {
                        r*=x;
                }
                return r;
        }
}
int btod(int n)
{
    int sum=0,i=0;
    while (n)
    {
        int m;
        m=n%10;
        n/=10;
        m==1?sum+=pow(2,i):printf("");
        i++;
    }
    return sum;
}
int main()
{
	int n;
	printf("Enter The Binary Number:\n>");
	scanf("%d",&n);
	printf("The Decimal Form Of The Entered Binary String Is: %d\n",btod(n));
	return 0;
}
