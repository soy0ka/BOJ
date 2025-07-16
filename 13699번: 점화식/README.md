# 13699번: 점화식 - <img src="https://static.solved.ac/tier_small/7.svg" style="height:20px" /> Silver IV

<!-- performance -->

<!-- 문제 제출 후 깃허브에 푸시를 했을 때 제출한 코드의 성능이 입력될 공간입니다.-->

<!-- end -->

## 문제

[문제 링크](https://boj.kr/13699)

<p>다음의 점화식에 의해 정의된 수열 t(n)을 생각하자:</p>

<ul>
<li>t(0)=1</li>
<li>t(n)=t(0)*t(n-1)+t(1)*t(n-2)+...+t(n-1)*t(0)</li>
</ul>

<p>이 정의에 따르면,</p>

<ul>
<li>t(1)=t(0)*t(0)=1</li>
<li>t(2)=t(0)*t(1)+t(1)*t(0)=2</li>
<li>t(3)=t(0)*t(2)+t(1)*t(1)+t(2)*t(0)=5</li>
<li>...</li>
</ul>

<p>주어진 입력 0 ≤ n&nbsp;<strong>≤&nbsp;</strong>35에 대하여 t(n)을 출력하는 프로그램을 작성하시오.</p>

## 입력

<p>첫째 줄에 n (0 ≤ n ≤ 35)이 주어진다.</p>

## 출력

<p>첫째 줄에 t(n)을 출력한다.</p>

## 소스코드

[소스코드 보기](점화식.cpp)