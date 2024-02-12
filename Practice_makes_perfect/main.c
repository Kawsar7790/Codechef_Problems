#include <stdio.h>

int main() {

    int hoursOfPracticing[4], count = 0;

    for (int i = 0; i <4 ; i++) {
        scanf("%d", &hoursOfPracticing[i]);
    }

    for (int i = 0; i <4 ; ++i) {
        if(hoursOfPracticing[i] >= 10 ){
            count += 1;
        }
    }

    printf("%d", count);

}
