#include <stdio.h>
//leap year test
int main()
{
  int y;
  printf("Enter the Year\n");
  scanf("%d",&y);
  
  if(y%4>=0)
  {
    printf("%d is a leap Year ",y);
  }
  else
  {
    printf("%d is not a leap Year ",y);
  }
  printf("\n");
  
  return 0;
}