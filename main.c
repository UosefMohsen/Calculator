#include <stdio.h>
#include <stdlib.h>

int main(){
    float A ,B ,sum,sum2;
    char G ;
    printf("Enter first digit = ");
    scanf("%f" ,&A);

    printf("Enter the second digit = ");
    scanf("%f",&B);

    printf("your digits are = %0.2f and %0.2f \n" ,A,B);
    printf("which mathematical operation do u wanna do ? (+ - * /) ");
    scanf(" %c", &G);

    if(G == '+') {
            sum = A + B;
            printf("%0.2f + %0.2f = %0.2f", A,B,sum) ;
    }
    else if (G == '-'){
            sum = A - B ;
            printf("%0.2f - %0.2f = %0.2f", A,B,sum ) ;
    }
    else if (G == '*') {
            sum = A * B ;
            printf("%0.2f * %0.2f = %0.2f" , A,B,sum) ;
    }
    else if (G == '/') {
        sum2 = A / B ;
            printf("%0.2f / %0.2f = %0.2f ", A, B ,sum2);
    }
    else {
        printf("Invalid input, use (+ - * /) \n");
    }
    return 0;
}
