/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 21964                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/21964                          #+#        #+#      #+#    */
/*   Solved: 2024/10/13 15:36:12 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main () {
  int n;
  scanf("%d", &n);
  char *str = (char *)malloc(sizeof(char) * (n + 1));

  scanf("%s", str);
  int len = strlen(str);
  for (int i = len - 5; i < len; i++) {
    printf("%c", str[i]);
  }
}