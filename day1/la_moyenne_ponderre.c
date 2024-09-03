// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    float num1, num2, num3;
    float poids1=2, poids2=3, poids3=5;
    float somePonderee, somePoids, moyennePonderee;
    
    printf("enter the first number: \n");
    scanf("%f",&num1);
    printf("enter the second number: \n");
    scanf("%f",&num2);
    printf("enter the third number: \n");
    scanf("%f",&num3);
    
    somePonderee=(num1*poids1)+(num2*poids2)+(num3*poids3);
    somePoids= poids1+poids2+poids3;
    moyennePonderee=somePonderee/somePoids;
    
    printf("la moyenne ponderee est: %f",moyennePonderee);
    
    return 0;
}