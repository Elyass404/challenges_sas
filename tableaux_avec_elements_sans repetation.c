#include <stdio.h>

int main() {
    // make a program that makes an array and inserting another array's elements but without repeating them in the new array
    //like first_array{1,2,5,5,4,5} >>> new array {1,2,5,4}
    
    int table [10]={1,1,1,1,1,1,1,1,6,7};
    int table2[10];
    int e = 0; //to give us the length of table2 an also indicate the next empty position in table2 to insert the next unrepeated element
    for (int i= 0 ; i<10; i++){
        int count =0;
        for (int j =0; j < e; j++){
            if (table[i] == table2[j]){
                count ++;
                break;
            }
        }
        if (count==0){
            table2[e]= table[i];
            e++;
        }
    }
    for( int z =0; z<e; z++){
        printf("%d\n",table2[z]);
    }

    return 0;
}