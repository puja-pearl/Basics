//Program to check whether a number is prime number or not.

#include <stdio.h>
int main()
{
    int n,i,flag=0;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=2 ; i<n ; i++)
    {
        if(n%i==0)
        flag++;
    }
        if(flag==0)
        	printf("%d is prime number",n);
        else
        	printf("%d is not a prime number",n);
        return 0;
}
