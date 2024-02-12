#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , first_cab , second_cab,i;
    scanf("%d",&n);

    for(i=0 ; i < n ; i++){
        scanf("%d%d",&first_cab , &second_cab);

        if(first_cab < second_cab){
        printf("FIRST\n");
        }

        else if (first_cab > second_cab){
        printf("SECOND\n");
        }

        else {
            printf("ANY\n");
        }
    }

}
