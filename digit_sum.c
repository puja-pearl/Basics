//This program is display the sum of the digits of a number.
#include <stdio.h>

int main()
{
    int n,r,s=0;
    printf("enter the value of n: ");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        s=s+r;
    }
    printf("sum is %d",s);
    return 0;
}
