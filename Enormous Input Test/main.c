#include <stdio.h>
#include <stdlib.h>

int main()
{

        int arraySize, i , j , divisor , divisible=0;
        scanf("%d",&arraySize);
        scanf("%d",&divisor);



        int num_array[arraySize];

        for (i = 0 ; i < arraySize ; i++){
                scanf("%d", &num_array[i]);

        }

        for (j = 0 ; j < arraySize ; j++){
                if ( num_array[j] % divisor == 0 ){
                    divisible += 1;
                }

         }

         printf ("%d" ,divisible);


}
