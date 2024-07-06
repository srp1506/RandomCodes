#include<stdio.h>
int main()
{
	char c;
	FILE *ptr1,*ptr2;
	ptr1=fopen("file2.txt","r");
	ptr2=fopen("file2copy.txt","w");
	while (c!=EOF)
	{
		c=fscanf(ptr1,"%c",&c);
		fprintf(ptr2,"%c",c);
	}
	return 0;
}
