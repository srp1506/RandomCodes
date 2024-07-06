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
int main()
{
	printf("Enter The Number And The Order:\n>");
	int n,x;
	scanf("%d%d",&x,&n);
	printf("%d\n",pow(x,n));
	return 0;
}
