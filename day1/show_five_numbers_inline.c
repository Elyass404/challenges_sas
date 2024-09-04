#include <stdio.h>

 int main() {
    // Write C code here
    int num;
    printf("enter the count you want to show: ");
    scanf("%d",&num);
   for (int i = 1 ; i <= num ; i+=5){
       for(int j=0; j < 5 ; j++){
           printf("%d ", j+i);
       }
       printf("\n");
   }
    
    return 0;
}
