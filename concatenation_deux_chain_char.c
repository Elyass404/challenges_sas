#include <stdio.h>
#include <string.h>
int lenght(char[100]){
    
}

int main() {
char fname[]= "ilyass";
char lname []= "marghine";
char full[20];
int index=0;
//my method of concatenating
for (int i =0 ; i < sizeof(fname)/sizeof(fname[0]); i++ ){
    full[index]= fname[i];
    index++;
}

for (int i =0 ; i < sizeof(lname)/sizeof(lname[0]); i++ ){
    full[index]= lname[i];
    index++;
}
printf("contatenating using loops and array inserting: ");
//printing the whole word
for (int i =0 ; i < sizeof(full)/sizeof(full[0]); i++ ){
    printf("%c",full[i]);
}
printf("\n\n");

//second method of concatenating using strcat() function 
char str1[20] = "Hello ";
char str2[] = "World!";

char first_name [20]="hello ";
char last_name [20]="ilyass";
char complete_name [20]="";

strcat(complete_name,first_name);
strcat(complete_name, last_name );

printf("concatenating using the built in function stcat(): ");

printf("%s",complete_name);


    return 0;
}