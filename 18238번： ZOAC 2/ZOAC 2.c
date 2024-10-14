/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 18238                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/18238                          #+#        #+#      #+#    */
/*   Solved: 2024/10/13 15:44:19 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
  char *str = (char *)malloc(sizeof(char) * 104);
  scanf("%s", str);
  *str = toupper(*str);
  int count = 0;
  char now = 'A';
  for (int i = 0; i < strlen(str); i++) {
    if (str[i] == now) {
      continue;
    }
    count += abs(str[i] - now) > 13 ? 26 - abs(str[i] - now) : abs(str[i] - now);
    now = str[i];
  }

  printf("%d", count);
  free(str);
  return 0;
}