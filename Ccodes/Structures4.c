#include<stdio.h>
typedef struct unreal
{
	float real;
	float img;
}i;
int main()
{
	int n;
	printf("How Many Complex Numbers Do You Have?\n");
	scanf("%d",&n);
	i unreal[n];
	printf("Enter The Real And Imaginary part Of The Complex Numbers Respectively\n");
	for (int i=0;i<n;i++)
	{
		scanf("%f%f",&unreal[i].real,&unreal[i].img);
	}
	for (int i=0;i<n;i++)
	{
		printf("The Value Of Complex Number %d Are:%f+%fi\n",i+1,unreal[i].real,unreal[i].img);
	}
}

