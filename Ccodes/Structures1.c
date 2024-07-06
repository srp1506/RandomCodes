#include<stdio.h>
struct employee
{
	char name[50];
	int age;
	int salary;
	int raise;
};
int main()
{
	int n;
	printf("How Many Employees Does Your Company Have?\n");
	scanf("%d",&n);
	struct employee company1[n];
	for (int i=0;i<n;i++)
	{
		printf("The Details Of Employee Number %d In Order Are:\n",i+1);
		scanf("%s%d%d%d",company1[i].name,&company1[i].age,&company1[i].salary,&company1[i].raise);
	}
	for (int i=0;i<n;i++)
	{
		printf("The Details Of Employee Number %d Are:Name- %s,Age- %d,Salary- %d,Raise- %d \n",i+1,company1[i].name,company1[i].age,company1[i].salary,company1[i].raise);
	}
	return 0;
}
