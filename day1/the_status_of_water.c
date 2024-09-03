#include <stdio.h>

int main() {
    // Write C code here
    float tempera;
    printf("give me the temperature of the water:\n");
    scanf("%f",&tempera);
    if(tempera<0){
        printf("the status of water is solid");
    }else if(tempera>=0 && tempera <100) {
        printf("the status of water is liquid.");
        
    }else if (tempera>=100){
        printf("the status of water is gaz.");
    }
    
    return 0;
}