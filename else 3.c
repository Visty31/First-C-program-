#include <stdio.h>
//Grater than test
int main()
{
  int num1,num2;
  printf("Enter any two numbers\n");
  scanf("%d%d",&num1,&num2);
  
  if(num1/num2>=1)
  {
    printf("%d is greater than  %d",num1,num2);
  }
  else
  {
    printf("%d is less than %d",num1,num2);
  }
  printf("\n");
  
  return 0;
}