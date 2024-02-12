#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, battery_charge;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        scanf("%d", &battery_charge);
        if(battery_charge <= 15){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }

}
