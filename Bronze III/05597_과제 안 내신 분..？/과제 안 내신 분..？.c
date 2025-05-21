/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 5597                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/5597                           #+#        #+#      #+#    */
/*   Solved: 2024/10/09 22:07:17 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int main() {
  int attend[30] = {0,};
  for (int i = 0; i < 28; i++) {
    int student;
    scanf("%d", &student);
    attend[student-1] = 1;
  }

  for (int i = 0; i < 30; i++) {
    if (attend[i] == 0) {
      printf("%d\n", i+1);
    }
  }
}