#include <stdio.h>

int main() {
    int n , following , follower;
    scanf("%d",&n);
    for (int i = 0; i <n ; ++i) {
        scanf("%d",&following);
        scanf("%d",&follower);

        if(following > 10*follower){
            printf("Yes\n");
        }
        else {
            printf("No\n");
        }

    }

}
