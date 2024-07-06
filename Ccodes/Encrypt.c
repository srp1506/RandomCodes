#include<stdio.h>
#include<stdlib.h>
void encrypt(char *ptr)
{
	int n;
	while (*ptr!='\0')
	{
		n=rand()%10+1;
		*ptr+=n;
		ptr++;
	}
}
int main()
{
	int key;
	printf("Enter The Key For Encryption:\n>");
	scanf("%d",&key);
	srand(key);
	char msg[500];
	printf("Enter The Secret Message:\n>");
	scanf(" %[^\n]%c",msg);
	encrypt(msg);
	printf("The Encypted Message Is:\n>%s\n",msg);
	return 0;
}
