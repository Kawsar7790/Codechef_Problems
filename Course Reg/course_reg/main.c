#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, N , M ,K ,seat;
    scanf("%d" ,&n);

    while (n-- > 0){
        scanf("%d",&N);
        scanf("%d",&M);
        scanf("%d",&K);

        seat = M-K;

        if(seat >= N){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    /*
     for(i=1 ; i=n ; i++){
        scanf("%d",&N);
        scanf("%d",&M);
        scanf("%d",&K);

        seat = M-K;

        if(seat >= N){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
     }
     */
}
