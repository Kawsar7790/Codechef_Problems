#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i <n ; ++i) {
        int w, x, y, z;
        scanf("%d %d %d %d", &w, &x, &y, &z);
        int totalBalance = w;
        int totalDeposit = x*z;
        int totalCharge = y*z;

        int finalBalance = (totalBalance+totalDeposit)-totalCharge;

        printf("%d",finalBalance);
    }
}
