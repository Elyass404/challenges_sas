// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
  int num;
  int i; 
  printf("Please enter a number you want to use: ");
  scanf("%d",&num);
  for (i=0; i<=10;i++){
      printf("%d * %d = %d \n",i, num, num*i);
  }
  return 0;
}