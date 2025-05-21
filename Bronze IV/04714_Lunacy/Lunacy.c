/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 4714                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/4714                           #+#        #+#      #+#    */
/*   Solved: 2024/10/13 15:39:14 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int main() {
  double weight;
  while (1) {
    scanf("%lf", &weight);
    if (weight == -1.0) {
      break;
    }
    printf("Objects weighing %.2lf on Earth will weigh %.2lf on the moon.\n", weight, weight * 0.167);
  }
}