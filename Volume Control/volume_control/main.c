#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n , volume_1 , volume_2,i , result;
    scanf("%d",&n);

    for(i=0 ; i < n ; i++){
        scanf("%d%d",&volume_1 , &volume_2);

        if(volume_1 < volume_2){
            result = volume_2 - volume_1;
            printf("%d\n" , result);
        }

        else {
            result = volume_1 - volume_2;
            printf("%d\n" , result);
        }

    }

    return 0;

}
