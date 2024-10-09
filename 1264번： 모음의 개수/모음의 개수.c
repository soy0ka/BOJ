/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1264                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1264                           #+#        #+#      #+#    */
/*   Solved: 2024/10/09 16:43:10 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
  while (1) {
    char *str = (char *)malloc(300);
    fgets(str, 300, stdin);
    if (str[0] == '#') {
      free(str);
      break;
    }

    int count = 0;
    int len = strlen(str);

    for (int i=0; i<len; i++) {
      if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
        count++;
      }
    }

    printf("%d\n", count);
    free(str);
  }
  return 0;
}