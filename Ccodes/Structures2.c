#include<stdio.h>
typedef struct vector
{
	float x_comp;
	float y_comp;
}vect;
int main()
{
	int n;
	printf("How Many Vectors Do You Have?\n");
	scanf("%d",&n);
	vect v[n];
	printf("Enter Their x And y Components Respectively:\n");
	for (int i=0;i<n;i++)
	{
		scanf("%f%f",&v[i].x_comp,&v[i].y_comp);
	}
	for (int i=0;i<n;i++)
	{
		printf("The x Component And y Component Of Vector %d Is:%f and %f\n",i+1,v[i].x_comp,v[i].y_comp);
	}
	return 0;
}
