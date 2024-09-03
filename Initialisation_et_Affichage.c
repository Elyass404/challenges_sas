// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
  int myTable[]={1,2,3,4,5};
  int i ;
  for (i=0; i<sizeof(myTable)/sizeof(myTable[0]); i++){
     printf("%d\n",myTable[i]);
  }
  return 0;
}