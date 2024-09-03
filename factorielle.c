#include <stdio.h>

int main() {
    // Write C code here
  int num;
  int result=1;
  int i; 
  printf("Please enter a number you want to use: ");
  scanf("%d",&num);
  for (i=1; i<=num; i++){
      result *= i;
  }
  printf("le factorielle de %d est: %d",num, result);
  return 0;
}