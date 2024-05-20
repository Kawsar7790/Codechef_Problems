#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int test_case, chocolate, min_case, max_case, minf_case;
  scanf("%d", &test_case);


  while (test_case > 0) {

    scanf("%d", &chocolate);
    if (chocolate == 1) {

      min_case = chocolate;
      max_case = chocolate;

    }
    else if (chocolate % 2 != 0) {

      min_case = (chocolate / 2) + 1;
      max_case = chocolate;

    }

    else{

        min_case = chocolate / 2;
        max_case = chocolate;
    }

    printf("%d %d\n", min_case, max_case);
    test_case--;
  }

}



