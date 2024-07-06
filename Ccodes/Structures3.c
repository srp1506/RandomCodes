#include<stdio.h>
typedef struct vector 
{
	float x;
	float y;
}vect;
float sum1(vect a,vect b)
{
	float c;
	c=a.x+b.x;
	return c;
}
float sum2(vect a,vect b)
{
	float c;
	c=a.y+b.y;
	return c;
}
int main()
{
	vect a,b;
	printf("Enter The Values Of The First Vector:\n");
	scanf("%f%f",&a.x,&a.y);
	printf("Enter The Values Of The Second Vector:\n");
	scanf("%f%f",&b.x,&b.y);
	printf("The Vector Sum Of The Two Vectors Is:%f,%f\n",sum1(a,b),sum2(a,b));
	return 0;
}
