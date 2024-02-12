#include <stdio.h>
#include <stdlib.h>

int main()
{
    int withdraw;
    float balance;

    scanf("%d", &withdraw);
    scanf("%f",&balance);

    if (withdraw+0.5 > balance){
          printf("%.2f\n" , balance);

    }
    else if  ( withdraw%5 != 0){

        printf("%.2f\n" , balance);
    }

    else {
        printf("%.2f\n" , balance- withdraw - 0.5);
    }

    return 0;
}
