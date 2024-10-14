#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int get_min_repeating_length(char *str) {
  int len = strlen(str);
  int *pi = (int *)malloc(sizeof(int) * len);
  pi[0] = 0;

  for (int i = 1, j = 0; i < len; i++) {
    while (j > 0 && str[i] != str[j]) {
      j = pi[j - 1];
    }
    if (str[i] == str[j]) {
      j++;
    }
    pi[i] = j;
  }

  int min_length = len - pi[len - 1]; 
  free(pi);
  return min_length;
}

char* tangchorou(char *str, int start) {
  int len = strlen(str);
  char *rotated_str = (char *)malloc(sizeof(char) * (len + 1));

  for (int i = 0; i < len; i++) {
    rotated_str[i] = str[(start - 1 + i) % len];
  }
  rotated_str[len] = '\0';
  int min_length = get_min_repeating_length(rotated_str);

  char *result = (char *)malloc(sizeof(char) * (min_length + 1));
  strncpy(result, rotated_str, min_length);
  result[min_length] = '\0';

  free(rotated_str);
  return result;
}

int main() {
  int T;
  scanf("%d", &T);
  for (int i = 0; i < T; i++) {
    char *str = (char *)malloc(sizeof(char) * 28);
    scanf("%s", str);

    char *P1_Result = tangchorou(str, 1);
    char *P2_Result = tangchorou(str, 2);

    printf("%s\n", P1_Result);
    printf("%s\n", P2_Result);

    free(str);
    free(P1_Result);
    free(P2_Result);
  }
  return 0;
}