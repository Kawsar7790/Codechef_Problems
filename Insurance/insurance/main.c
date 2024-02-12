#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, rebate_amount, damarage;
    scanf("%d", &n);

    for(i=1 ; i<=n; i++){
     scanf("%d %d", &damarage,&rebate_amount);

    if (damarage <= rebate_amount){

            printf("%d\n", damarage);
      }
     else {

            printf("%d\n", rebate_amount);
      }
    }


    return 0;
}
