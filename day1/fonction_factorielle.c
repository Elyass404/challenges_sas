#include <stdio.h>
int factorielle(int a){
    int result=1;
    for(int i = a ; i>0 ; i--){
        result *=i;
    }
    return result;
}
int main() {
    // Write C code here
    int num;
    printf("please enter the number: ");
    scanf("%d",&num);
    int facto=factorielle(num);
    printf("the factorielle of the number %d is: %d", num, facto);
    

    return 0;
}