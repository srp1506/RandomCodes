#include<stdio.h>
void sort (int *ptr1,int n)
{
	int pin;
	int *ptr2=(ptr1++);
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			if (*(ptr1+i)<*(ptr2+j))
			{
			pin=*(ptr1+i);
			*(ptr1+i)=*(ptr2+j);
			*(ptr2+j)=pin;
			}

		}
	}
}
int main()
{
	int n,i=0;
	printf("Enter The Size Of The Array:\n");
	scanf("%d",&n);
	int array[n];
	printf("The Elements Of The Array:\n");
	while (i<n)	
	{
		scanf("%d",&array[i]);
		i++;
	}
	sort(array,n);
	printf("The Sorted List:\n");
	for (int i=0;i<n;i++)
	{
		printf("%d\n",array[i]);
	}
	return 0;
}
