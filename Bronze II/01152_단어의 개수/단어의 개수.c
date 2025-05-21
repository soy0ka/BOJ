/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1152                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1152                           #+#        #+#      #+#    */
/*   Solved: 2025/04/02 17:08:12 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main () {
  int length;
  int words = 0;
  bool flag = false;
  char sen[1000001];
  
  fgets(sen, sizeof(sen), stdin);
  length = strlen(sen);

  if (sen[length - 1] == '\n') sen[length - 1] = '\0';
  length = strlen(sen);

  for (int i = 0; i < length; i++) {
    if (sen[i] != ' ' && !flag) {
        words++;
        flag = true;
    } else if (sen[i] == ' ') {
      flag = false;
    }
  }

  printf("%d", words);
}
