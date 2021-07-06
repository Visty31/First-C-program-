#include <stdio.h>
//divisiblity test
int main()
{
  int num1,num2;
  printf("Enter   the number\t and the divisibility number\n");
  scanf("%d%d",&num1,&num2);
  
  if(num1%num2<=0)
  {
    printf("%d is divisible by %d",num1,num2);
  }
  else
  {
    printf("%d is not divisible by %d",num1,num2);
  }
  return 0;
}