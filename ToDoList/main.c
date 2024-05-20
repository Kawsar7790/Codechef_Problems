#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1,cases, numberCases, toBeRemoved;
    scanf("%d", &cases);

    while (i <= cases)
    {
        toBeRemoved = 0;
        scanf("%d", &numberCases);
        int diffRange[numberCases];
        for(int j = 0; j < numberCases; j++){
            scanf("%d", &diffRange[j]);
        }

        for(int k = 0; k < numberCases; k++){
            if(diffRange[k] >= 1000){
                toBeRemoved++;
            }
        }
        printf("%d\n", toBeRemoved);

        i++;
    }
    return 0;
}


