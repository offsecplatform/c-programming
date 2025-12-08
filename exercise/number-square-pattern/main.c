/*
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
*/
#include <stdio.h>
int main() {
  int n;
  printf("Enter an integer: ");
  scanf("%d", &n);
  for (int i = 1; i <= 4; i++) {
    for (int i = 1; i <= n; i++) {
      printf("%d  ", i);
    }
    printf("\n");
  }
  return 0;
}
