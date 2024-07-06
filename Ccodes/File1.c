#include<stdio.h>
int main()
{
	int n;
	FILE *ptr;
	ptr=fopen("file.txt","w");
	printf("Enter The Value Of n:\n");
	scanf("%d",&n);
	for (int i=1;i<=10;i++)
	{
		fprintf(ptr,"%dx%d=%d\n",n,i,n*i);
	}
	return 0;
}
