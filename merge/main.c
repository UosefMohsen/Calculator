#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1){
    int D ,Q, x;
    float A ,B ,sum ,sum2;
    char G ;

    printf("For calculator type 1, for even odd check type 2\n");
    scanf("%d", &Q);


    switch (Q){

        case 1:

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
            break;

        case 2:
    printf("Enter a digit\n");
    scanf("%d", &D);

    printf("Your number is = %d \n", D);
    if ( D & 1 )
        printf("The number %d is odd\n", D);

        else
        printf("The number %d is even\n", D);

                        break;

        default: printf("Type 1 or 2 only in order to start");

     }
        printf("\n");
        printf("if you wanna quit enter 0, to continue enter 1\n");
        scanf(" %d", &x);

        if(x == 0)
            break;
    }
    return 0;
}
