#include <stdio.h>

int main() {
    // Write C code here
    
    int num;
    int i; 
    int sum=0;
    
    printf("please enter the number you want an array to contain: ");
    scanf("%d", &num);
    
    int table[num];
    
    
    for(i=0; i<sizeof(table)/sizeof(table[0]); i++){
        
            printf("enter the number: ");
            scanf("%d",&table[i]);
        }
        
        for (i=0; i<sizeof(table)/sizeof(table[0]); i++){
            sum+= table[i];
        }
        printf ("the sum of all the numbers is: %d", sum);
        
    return 0;
}