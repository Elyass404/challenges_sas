#include <stdio.h>

int main() {
    // Write C code here
   int num1, num2,sum;
   printf("please enter the first number: ");
   scanf("%d",&num1);
   printf("please enter the second number: ");
   scanf("%d",&num2);
   
   if(num1 == num2){
       sum = (num1+num2)*3;
   }else{
       sum = num1+num2;
   }
   printf("the result is : %d",sum);
   
    return 0;
}