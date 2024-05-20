#include <stdio.h>
#include <stdlib.h>

int main() {
  int month_date;
  scanf("%d", &month_date);

  if (month_date == 25) {
    printf("%s", "CHRISTMAS");
  } else {
    printf("%s", "ORDINARY");
  }
}
