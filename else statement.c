#include <stdio.h>

//use of if else 

int main()
{
  while(1)
 {
  int choice;
  int num1,num2;
  int y;
  int n1,n2;
  int m1,m2,m3,mark;
  int a,b;
  
  printf("Choice 1: Divisibility test\n");
  printf("Choice 2: Leap Year test \n");
  printf("Choice 3: Greater than test\n");
  printf("Choice 4: Grading system \n");
  printf("Choicd 5: Equal to test ");
  printf("\n");
   printf("Enter your choice\n");
  scanf("%d",& choice);
  switch(choice)
  {
    case(1):
   //divisiblity test
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
   break;
    
    case(2):
//leap year test
  printf("Enter the Year\n");
  scanf("%d",&y);
  
  if(y%4<=0)
  {
    printf("%d is a leap Year",y);
  }
  else
  {
    printf("%d is not a leap Year",y);
  }
    break;
    
    case(3):
//Grater than test
  printf("Enter any two numbers\n");
  scanf("%d%d",&n1,&n2);
  
  if(n1/n2>=1)
  {
    printf("%d is greater than  %d",n1,n2);
  }
  else
  {
    printf("%d is less than %d",n1,n2);
  }
  printf("\n");
    break;
    
    case(4):
//grading system
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
    break;
    
    case(5):
//Equal to test
  printf("Enter any two numbers\n");
  scanf("%d%d",&a,&b);
  
  if(a==b)
  {
    printf("%d and %d are equal",a,b);
  }
  else
  {
    printf("%d and %d are not equal",a,b);
  }
  printf("\n");
    break;
    
    default:
      printf("Invalid Choice");
  }
 int select ;
  printf("\n1.Continue\n0.Exit\nYour choice");
  scanf("%d",&select);
   if(select==0){exit(0);}
           else if(select==1) {printf("Ok....\n");}
       else{printf("Invalid choice .....exiting");}
 }
  return 0;
}