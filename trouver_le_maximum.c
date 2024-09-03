#include <stdio.h>

int main() {
    // Write C code here
    
   int max=0;
   int numarr,i;
   printf ("Please enter the number of element for the table: ");
   scanf("%d",&numarr);
   
   int table[numarr];
   
   for (i=0; i<numarr; i++){
   printf("enter the number to add it to the table: ");
   scanf("%d",&table[i]);
   }
   
   
   for (i=0; i<sizeof(table)/sizeof(table[0]); i++){
       if (table[i]>max){
           max=table[i];
       }
   }
   printf("the biggest number of the table is : %d", max);
        
    return 0;
}