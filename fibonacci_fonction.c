#include <stdio.h>
int fibonachi(int a){
    int result=0;
    int x=0,y=1;
    if (a==0 || a==1){
        printf("%d",a);
    }else{
        for(int i =1 ;i <= a ; i++){
            printf("%d\n",x);
            result=x+y;
            x=y;
            y=result;
        }
    }
}
int main() {
    // Write C code here
    int num;
    printf("please enter the number you want: ");
    scanf("%d",&num);
    fibonachi(num);
    
    
    return 0;
}