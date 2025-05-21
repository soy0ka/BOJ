/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 25304                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/25304                          #+#        #+#      #+#    */
/*   Solved: 2024/10/09 21:32:00 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int main() {
  int totalPrice = 0;
  int totalGoodsQuantity = 0;
  int priceCheck = 0;
  scanf("%d", &totalPrice);
  scanf("%d", &totalGoodsQuantity);

  // goods 라는 2*n 크기의 2차원 배열을 동적할당한다.
  // int **goods = (int **)malloc(sizeof(int *) * 2);
  // for (int i = 0; i < 2; i++) {
  //   goods[i] = (int *)malloc(sizeof(int) * totalGoodsQuantity);
  // }

  for (int i=0; i<totalGoodsQuantity; i++) {
    int price, quantity;
    scanf("%d %d", &price, &quantity);
    priceCheck += price * quantity;
  }
  // if (priceCheck == totalPrice) {
  //   printf("Yes");
  // } else {
  //   printf("No");
  // }
  printf("%s", priceCheck == totalPrice ? "Yes" : "No");
}