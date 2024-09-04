#include <stdio.h>
int maxfunc(int a, int b){
        int max ;
        if(a>b){
            max=a;
        }else{
            max=b;
        }
        return max;
    }
int main() {
    // Write C code here
    int firstn, secondn;
    printf("please enter the first number: ");
    scanf("%d",&firstn);
    printf("please enter the second number: ");
    scanf("%d",&secondn);
   int result= maxfunc(firstn,secondn);
   printf("the greater number between the two is: %d",result);
    
    
    return 0;
}