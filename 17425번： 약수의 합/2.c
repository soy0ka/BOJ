#include <stdio.h>
#include <stdlib.h>

int main () {
  int n;
  scanf("%d", &n);

  int *input = (int *)malloc(sizeof(int) * n);
  long long *result = (long long *)malloc(sizeof(long long) * n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &input[i]);
  }

  for (int i = 0; i < n; i++) {
    long long factorSum[1000001] = {0, };
    for (int j = 1; j <= input[i]; j++) {
      for (int k = j; k <= input[i]; k += j) {
        factorSum[k] += j;
      }
    }
    for (int j = 1; j <= input[i]; j++) {
      result[i] += factorSum[j];
    }
  }

  for (int i = 0; i < n; i++) {
    printf("%lld\n", result[i]);
  }

  free(input);
  free(result);
  return 0;
}
