#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int answer,guess,count=0;
	char choice;
	srand(time(0));
	answer=rand()%100+1;
	printf("Let Start\n");
	printf("Do You Need Help? Y/N\n>");
	scanf(" %c",&choice);
	while (guess!=answer)
	{
		printf("Enter Your Guess:\n>");
		scanf("%d",&guess);
		if (choice='Y')
		{
			if (guess>answer)
			{
				printf("Guess Is Higher Than The Target\n");
			}	
			if (guess<answer)		
			{
				printf("Guess Is Lower Than The Target\n");
			}
		}
		count++;
	}
	printf("You Guess The Number In %d Tries\n",count);
	return 0;
}
