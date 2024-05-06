#include <stdio.h>


int main() {
  int n, dice_1, dice_2;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &dice_1);
    scanf("%d", &dice_2);

    if (dice_1 + dice_2 > 6) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
  return 0;
}
