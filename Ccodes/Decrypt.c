#include<stdio.h>
#include<stdlib.h>
void decrypt(char *ptr)
{
	int n;
	while (*ptr!='\0')
	{
		n=rand()%10+1;
		*ptr-=n;
		ptr++;
	}
}
int main()
{
	int n,key;
	printf("Enter The Key For Decryption:\n>");
	scanf("%d",&key);
	srand(key);
	char msg[500];
	printf("Enter The Encrypted Message:\n>");
	scanf(" %[^\n]%c",msg);
	decrypt(msg);
	printf("The Decrypted Message Is: \n >%s\n",msg);
	return 0;
}
