//This program is to convert number into words.

#include<stdio.h>
int main()
{
    int n,t,o;
    printf("enter the value of n:");
    scanf("%d",&n);
    o=n%10;
    t=n/10;
    
    switch(t)
    {
        case 0:printf(" ");
        break;
        case 1:printf(" ");
        break;
        case 2:printf("twenty");
        break;
        case 3:printf("thirty");
        break;
        case 4:printf("fourty");
        break;
        case 5:printf("fifty");
        break;
        case 6:printf("sixty");
        break;
        case 7:printf("seventy");
        break;
        case 8:printf("eighty");
        break;
        case 9:printf("ninty");
        break;
    }
    printf("");
    
    switch(o)
    {
      case 0:
      {
      if(t==0)
      printf("zero");
      else if(t==1)
      printf("ten");
      else 
      printf("");
      }
      break;
      case 1:
      {
      if(t==1)
      printf("eleven");
      else
      printf("one");
      }
      break;
      case 2:
      {
      if(t==1)
      printf("twelve");
      else
      printf("two");
      }
      break;
      case 3:
      {
      if(t==1)
      printf("thirteen");
      else
      printf("three");
      }
      break;
      case 4:
      {
      if(t==1)
      printf("fourteen");
      else
      printf("four");
      }
      break;
      case 5:
      {
      if(t==1)
      printf("fifteen");
      else
      printf("five");
      }
      break;
      case 6:
      {
      if(t==1)
      printf("sixteen");
      else
      printf("six");
      }
      break;
      case 7:
      {
      if(t==1)
      printf("seventeen");
      else
      printf("seven");
      }
      break;
      case 8:
      {
      if(t==1)
      printf("eighteen");
      else
      printf("eight");
      }
      break;
      case 9:
      {
      if(t==1)
      printf("ninteen");
      else
      printf("nine");
      }
      break;
      }
      printf("");
      return 0;
}

