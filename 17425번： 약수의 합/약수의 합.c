/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 17425                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/17425                          #+#        #+#      #+#    */
/*   Solved: 2024/10/07 15:38:07 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int soinsoo (int n, int factors[][2]) {
  int count = 0;
  if (n % 2 == 0) {
    int jisu = 0;
    while (n % 2 == 0) {
      n /= 2;
      jisu++;
    }
    factors[count][0] = 2;
    factors[count][1] = jisu;
    count++;
  }
  for (int i = 3; i * i <= n; i += 2) {
    if (n % i == 0) {
      int jisu = 0;
      while (n % i == 0) {
        jisu++;
        n /= i;
      }
      factors[count][0] = i;
      factors[count][1] = jisu;
      count++;
    }
  }

  if (n > 2){
    factors[count][0] = n;
    factors[count][1] = 1;
    count++;
  }
  return count;
}

int factorsum (int n) {
  int factors[100][2] = {0};
  int count = soinsoo(n, factors);
  long long sum = 1;
  
  for (int i=0; i<count; i++) {
    sum *= (pow(factors[i][0], factors[i][1] + 1) - 1) / (factors[i][0] - 1);
  }
  return sum;
}

int main () {
  int n;
  scanf("%d", &n);

  int *input = (int *)malloc(sizeof(int) * n);
  long long *result = (long long *)malloc(sizeof(long long) * n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &input[i]);
  }

  for (int i = 0; i < n; i++) {
    for (int j = 1; j <= input[i]; j++) {
      result[i] += factorsum(j);
    }
  }

  for (int i = 0; i < n; i++) {
    printf("%lld\n", result[i]);
  }

  free(input);
  free(result);
  return 0;
}