/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 15740                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/15740                          #+#        #+#      #+#    */
/*   Solved: 2024/10/08 15:47:33 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 이따구로 하면 75점이 나온다
// 10^10000 이면 array를 사용하면 될듯?
// + 아맞다 음수;;; 개빡치네

void sum (char *a, char *b) {
  int len_a = strlen(a);
  int len_b = strlen(b);
  int len = len_a > len_b ? len_a : len_b;
  char *result = (char *)malloc(len + 2);

  int olrim = 0;
  int idx = 0;

  for (int i = 0; i < len; i++) {
    int a_num = len_a - i - 1 >= 0 ? a[len_a - i - 1] - '0' : 0;
    int b_num = len_b - i - 1 >= 0 ? b[len_b - i - 1] - '0' : 0;
    int sum = a_num + b_num + olrim;
    result[idx++] = sum % 10 + '0';
    olrim = sum / 10;
  }

  if (olrim) {
    result[idx++] = olrim + '0';
  }

  for (int i = idx - 1; i >= 0; i--) {
    printf("%c", result[i]);
  }
  printf("\n");
  
}

void sub (char *a, char *b) {
  int len_a = strlen(a);
  int len_b = strlen(b);
  int len = len_a > len_b ? len_a : len_b;
  char *result = (char *)malloc(len + 2);
  // int narim = 0;
  int turo = 0;
  int idx = 0;

  for (int i = 0; i < len; i++) {
    int a_num = len_a - i - 1 >= 0 ? a[len_a - i - 1] - '0' : 0;
    int b_num = len_b - i - 1 >= 0 ? b[len_b - i - 1] - '0' : 0;
    int sub = a_num - b_num - turo;
    if (sub < 0) {
      sub += 10;
      turo = 1;
    } else {
      turo = 0;
    }
    result[idx++] = sub + '0';
  }

  int i = idx - 1;
  while (i > 0 && result[i] == '0') {
    i--;
  }

  for (int j = i; j >= 0; j--){
    printf("%c", result[j]);
  }
  free(result);
}

int checkMinus (char *str) {
  if (str[0] == '-') {
    return 1;
  } else {
    return 0;
  }
}

int main () {
  char *a = (char *)malloc(10001);
  char *b = (char *)malloc(10001);

  scanf("%s %s", a, b);

  int const minus_a = checkMinus(a);
  int const minus_b = checkMinus(b);

  char *abs_a = minus_a ? a + 1 : a;
  char *abs_b = minus_b ? b + 1 : b;
  int len_a = strlen(abs_a);
  int len_b = strlen(abs_b);

  if (minus_a && minus_b) {
    printf("-");
    sum(abs_a, abs_b);
  } else if (!minus_a && !minus_b) {
    sum(abs_a, abs_b);
  } else {
    int compare;
    if (len_a != len_b) {
      compare = len_a - len_b;
    } else {
      compare = strcmp(abs_a, abs_b);
    }
  
    if (compare > 0) {
      if (minus_a) printf("-");
      sub(abs_a, abs_b);
    } else if (compare < 0) {
      if (minus_b) printf("-");
      sub(abs_b, abs_a);
    } else {
      printf("0");
    }
  }

  free(a);
  free(b);

  return 0;
}