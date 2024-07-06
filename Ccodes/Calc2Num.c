#include<stdio.h>
int pow(int a,int b)
{
	int c=1;
	for (int i=0;i<b;i++)
	{
		c*=a;
	}
	return c;
}
int main()
{
	float a,b;
	int o;
	printf("Enter Two Numbers:\n");
	scanf("%f%f",&a,&b);
	printf("Enter The Initial Of The Operation To Be Performed:\n");
	scanf("%d",&o);
	switch (o)
	{
		case 1:
			{
				printf("%f+%f=%f\n",a,b,a+b);
				break;
			}
		case 2:
			{
				printf("%f-%f=%f\n",a,b,a-b);
				break;
			}
		case 3:
			{
				printf("%fx%f=%f\n",a,b,a*b);
				break;
			}
		case 4:
			{
				printf("%f/%f=%f\n",a,b,a/b);
				break;
			}
		case 5:
			{
				printf("a^b=%d\n",pow(a,b));
				break;
			}
		default:
			{
				printf("Enter A Valid Operation:\n");
				break;
			}
	}
	return 0;
}
