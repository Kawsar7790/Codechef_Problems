#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int score;
    scanf("%d", &score);

    if (score > 750 || score == 750){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }


    return 0;
}
