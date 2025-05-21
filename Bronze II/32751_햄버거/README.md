# 32751번: 햄버거 - <img src="https://static.solved.ac/tier_small/4.svg" style="height:20px" /> Bronze II

<!-- performance -->
### 성능 요약
메모리: 2392 KB, 시간: 0 ms
<!-- end -->

## 문제

[문제 링크](https://boj.kr/32751)

<p><code>haru_101</code>은 같은 종류의 빵 $A$개, 패티 $B$개, 양상추 $C$개, 토마토 $D$개를 가지고 있다. 다음 조건을 만족하도록 재료를 쌓았을 때, 그것을 <strong>맛있는 햄버거</strong>라고 정의한다.</p>

<ul>
<li>재료는 아래에서 위로 쌓는다.</li>
<li>가장 아래쪽에 있는 재료와 가장 위쪽에 있는 재료는 빵이어야 한다.</li>
<li>인접한 재료는 같을 수 없다.</li>
<li>모든 재료를 다 사용할 필요는 없으나, 가진 재료로만 햄버거를 만들어야 한다.</li>
</ul>

<p><code>haru_101</code>은 자신이 만들고 싶은 햄버거를 문자열 $S$로 표현하였다. 이 햄버거가 <strong>맛있는 햄버거</strong>인지 판별하는 프로그램을 작성하라.</p>

## 입력

<p>첫 번째 줄에 문자열 $S$의 길이를 나타내는 정수 $N$이 주어진다.</p>

<p>두 번째 줄에 정수 $A$, $B$, $C$, $D$가 공백으로 구분되어 주어진다.</p>

<p>세 번째 줄에 알파벳 소문자 <span style="color:#e74c3c;"><code>a</code></span>, <span style="color:#e74c3c;"><code>b</code></span>, <span style="color:#e74c3c;"><code>c</code></span>, <span style="color:#e74c3c;"><code>d</code></span> 만으로 이루어진 문자열 $S$가 주어진다. $S$의 가장 왼쪽의 문자는 가장 아래쪽에 있는 재료를, 가장 오른쪽의 문자는 가장 위쪽에 있는 재료를 의미하며, <span style="color:#e74c3c;"><code>a</code></span>는 빵, <span style="color:#e74c3c;"><code>b</code></span>는 패티, <code><font color="#e74c3c">c</font></code>는 양상추, <code><font color="#e74c3c">d</font></code>는 토마토를 의미한다.</p>

## 출력

<p><code>haru_101</code>이 만들 햄버거가 <strong>맛있는 햄버거</strong>라면 <span style="color:#e74c3c;"><code>Yes</code></span>를, 아니면 <span style="color:#e74c3c;"><code>No</code></span>를 출력하라.</p>

## 소스코드

[소스코드 보기](햄버거.cpp)