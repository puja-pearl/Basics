//This program is to display the places of the digit in a number.
#include <stdio.h>

int main()
{
    int n,r,p=1;
    printf("enter the number: ");
    scanf("%d",&n);
    while(n!=0)
    {
    	r=n%10;
    	n=n/10;
    	printf("\n %d place= %d \n",p,r);
    	p=p*10;
    }
    return 0;
}

