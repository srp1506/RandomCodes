#include <stdio.h>
int main(void) {
    int test;
    scanf("%d",&test);
    while (test--)
    {
        int n;
        scanf("%d",&n);
        char msg[n];
        scanf("%s",msg);
        char temp;
        if (n%2==0)
        {
            for (int i=0;i<n-1;i=i+2)
            {
                temp=msg[i];
                msg[i]=msg[i+1];
                msg[i+1]=temp;
            }
        }
        else 
        {
            for (int i=0;i<n-2;i=i+2)
            {
                temp=msg[i];
                msg[i]=msg[i+1];
                msg[i+1]=temp;
            }
        }
        for (int i=0;i<n;i++)
        {
            int d=msg[i]-97;
            msg[i]=122-d;
        }
        printf("%s\n",msg);
    }
	return 0;
}
