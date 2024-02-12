#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , x , y , i;
    scanf("%d", &n);

    for (i=0 ; i<n ; i++){
       scanf("%d %d",&x,&y);
        if ( x < y)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
}
