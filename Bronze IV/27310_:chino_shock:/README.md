# 27310번: :chino_shock: - <img src="https://static.solved.ac/tier_small/2.svg" style="height:20px" /> Bronze IV

<!-- performance -->
### 성능 요약
메모리: 2024 KB, 시간: 0 ms
<!-- end -->

## 문제

[문제 링크](https://boj.kr/27310)

<p style="text-align:center;"><img alt="" src="https://upload.acmicpc.net/452dc985-d922-4b4c-aac8-6c4e743e9731/-/preview/"></p>

<p style="text-align: center;">그림 1. 아니메컵 서버를 열고 나서 <code>:chino_shock:</code>부터 추가해 사용하고 있는 sait2000</p>

<p style="text-align: center;"><img alt="" src="https://upload.acmicpc.net/f342887f-7d07-45b1-b7be-4ba5d8e4859c/-/preview/"></p>

<p style="text-align: center;">그림 2. <code>:chinoaww:</code>와 <code>:chino_shock:</code>의 입력 난이도를 비교하고 있는 sait2000</p>

<p>sait2000은 아니메컵 서버를 열고 나서 가장 먼저 이모지 <code>:chino_shock:</code>부터 추가했다. <code>:chino_shock:</code>를 비롯한 여러 이모지를 사용해보던 sait2000은 <code>:chino_shock:</code>와 같이 이름에 언더바(<code>_</code>)가 들어간 이모지가 <code>:chinoaww:</code>와 같이 이름에 언더바가 들어가지 않은 이모지보다 더 타이핑하기 어렵다는 사실을 알게 되었다.</p>

<p>이모지는 하나의 콜론(<code>:</code>)으로 시작해서 하나의 콜론으로 끝나며, 콜론 사이의 문자들은 모두 영어 소문자 혹은 언더바(<code>_</code>) 중 하나로 주어진다. sait2000은 이모지의 입력 난이도를 $(\text{이모지의 전체 길이}) +(\text{콜론의 개수}) +(\text{언더바의 개수})\times 5$로 정의했다. 이 정의에 따르면 <code>:chino_shock:</code>의 전체 길이는 $13$이고 콜론이 $2$개, 언더바가 $1$개이므로 입력 난이도가 $13+2+1\times 5=20$이 된다.</p>

<p>이모지가 주어졌을 때 이모지의 입력 난이도를 계산해 출력해보자.</p>

## 입력

<p>첫 번째 줄에 이모지가 주어진다. 주어지는 이모지는 항상 <code>:chino</code>로 시작하고 <code>:</code>로 끝나며, 전체 길이가 $7$ 이상 $32$ 이하이다.</p>

## 출력

<p>이모지의 입력 난이도를 출력한다.</p>

## 소스코드

[소스코드 보기](:chino_shock:.cpp)