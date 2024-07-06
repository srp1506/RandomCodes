#include<stdio.h>
int main()
{
	int n,max=0;
	printf("Enter The Size Of The List:\n>");
	scanf("%d",&n);
	int num[2][n];
	for (int i=0;i<n;i++)
	{
		scanf("%d",&num[0][i]);
	}
	for (int i=0;i<n;i++)
	{
		int count=0;
		for (int j=0;j<n;j++)
		{
			num[0][i]==num[0][j]?count++:printf("");
		}
		num[1][i]=count;
	}
	for (int i=0;i<n;i++)
	{
		num[1][i]>max?max=num[1][i]:printf("");
	}
	int mode[100]={0};
	for (int i=0;i<n;i++)
	{
		if (num[1][i]==max)
		{
			for (int j=0;j<n;j++)
			{
				if (i!=j && num[0][i]==num[0][j])
				{
					num[0][j]=0;
				}
			}
			mode[i]=num[0][i];
		}
	}
	printf("The Mode Are: ");
	for (int i=0;i<n;i++)
	{
		if (mode[i]!=0)
			printf("%d ",mode[i]);
	}
	printf("\nThe Number Of Occurrences Are: %d\n",max);
	return 0;
}
