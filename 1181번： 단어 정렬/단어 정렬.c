/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1181                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1181                           #+#        #+#      #+#    */
/*   Solved: 2024/10/09 22:13:59 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
  int n;
  scanf("%d", &n);
  int *count = (int *)malloc(sizeof(int) * n);
  char **words = (char **)malloc(sizeof(char *) * n);
  for (int i = 0; i < n; i++) {
    char *word = (char *)malloc(sizeof(char) * 51);
    scanf("%s", word);
    word = (char *)realloc(word, sizeof(char) * (strlen(word) + 1));
    count[i] = strlen(word);
    words[i] = word;
  }

  for (int i = 0; i < n; i++) {
    for (int j = i+1; j < n; j++) {
      if (count[i] > count[j]) {
        int temp = count[i];
        count[i] = count[j];
        count[j] = temp;
        char *temp_word = words[i];
        words[i] = words[j];
        words[j] = temp_word;
      } else if (count[i] == count[j]) {
        if (strcmp(words[i], words[j]) > 0) {
          char *temp_word = words[i];
          words[i] = words[j];
          words[j] = temp_word;
        }
      }
    }
  }

  for (int i = 0; i < n; i++) {
    if (i == 0 || strcmp(words[i], words[i-1]) != 0) {
      printf("%s\n", words[i]);
    }
  }
}