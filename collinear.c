//This program is display whether the given points are collinear or not.
#include <stdio.h>

int main()
{
    int a,a1,a2,a3,b1,b2,b3;
    printf("enter a1 and b1:");
    scanf("%d %d",&a1,&b1);
    printf("enter a2 and b2:");
    scanf("%d %d",&a2,&b2);
    printf("enter a3 and b3:");
    scanf("%d %d",&a3,&b3);
    a = a1*(b2-b3)+a2*(b3-b1)+a3*(b1-b2) ;
    if(a == 0)
    	printf("\n points are collinear");
    else
    	printf("\n points are non collinear");
    return 0;
}

