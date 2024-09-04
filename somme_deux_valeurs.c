#include <stdio.h>
int sumfunc(int x, int b){
    return x+b;
}
int main() {
    // Write C code here
    int firstnum, secondnum;
    int result;
    
    printf("please enter the first number: ");
    scanf("%d",&firstnum);
   
    printf("please enter the second number: ");
    scanf("%d",&secondnum);
    
    result= sumfunc(firstnum,secondnum);
    printf("the result of the sum is: %d",result);
        
    return 0;
}