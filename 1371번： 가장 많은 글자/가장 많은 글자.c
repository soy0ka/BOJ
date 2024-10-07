/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1371                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1371                           #+#        #+#      #+#    */
/*   Solved: 2024/10/07 20:01:43 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int main() {
  // 알파벳을 26개, 배열을 만들어서 나올때마다 카운트 하면될듯?
  int alphabet[26] = {0};
  int max = 0;

  while (1) {
    char c = getchar();
    if (c == EOF) {
      break;
    }

    if ('a' <= c && c <= 'z') {
      alphabet[c - 'a']++;
      if (alphabet[c - 'a'] > max) {
        max = alphabet[c - 'a'];
      }
    }
  }

  for (int i = 0; i < 26; i++) {
    if (alphabet[i] == max) {
      printf("%c", i + 'a');
    }
  }
}