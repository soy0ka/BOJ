/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 15829                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/15829                          #+#        #+#      #+#    */
/*   Solved: 2024/10/09 17:39:24 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main () {
  int l;
  int mod = 1234567891;
  scanf("%d", &l);
  
  char *password = (char *)malloc(sizeof(char) * (l+1));
  scanf("%s", password);

  int jarisu = strlen(password);
  unsigned long long hash = 0;
  unsigned long long jaegop = 1;

  for (int i = 0; i < l; i++) {
    hash += ((password[i] - 'a' + 1) * jaegop) % mod;
    jaegop = (jaegop * 31) % mod;
  }

  printf("%llu", hash % mod);
  free(password);
  return 0;
}
