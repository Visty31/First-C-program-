#include <stdio.h>
//grading system
int main()
{
  int m1,m2,m3,mark;
  printf("Enter any three marks\n");
  scanf("%d%d%d",&m1,&m2,&m3);
  
  mark=((m1+m2+m3)/3);
  
  if(mark>=70&&mark<=100)
  {
    printf("%d is grade A",mark);
  }
  else if(mark>=60&&mark<=69)
  {
    printf("%d is grade B",mark);
  }
  else if(mark>=50&&mark<=59)
  {
    printf("%d is grade C",mark);
  }
    else if(mark>=40&&mark<=49)
  {
    printf("%d is grade D",mark);
  }
  else
  {
    printf("%d is  FAIL",mark);
  }
  printf("\n");
  return 0;
}