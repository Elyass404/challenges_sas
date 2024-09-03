#include <stdio.h>

int main() {
    // Write C code here
    float degreec;
    float degreek;
printf("saiser la temperature en celesieus");
scanf("%f", &degreec);
degreek = degreec + 273.15;
printf("the degree in Kelvin is: %f", degreek);


    return 0;
}