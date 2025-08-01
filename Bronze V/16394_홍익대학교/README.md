# 16394번: 홍익대학교 - <img src="https://static.solved.ac/tier_small/1.svg" style="height:20px" /> Bronze V

<!-- performance -->
### 성능 요약
메모리: 2020 KB, 시간: 0 ms
<!-- end -->

## 문제

[문제 링크](https://boj.kr/16394)

<p>홍익대학교는 1946년에 개교하였다.</p>

<p>특정 년도가 주어졌을 때, 그 해가 개교 몇 주년인지 출력하라.</p>

<p>단, 홍익대학교는 없어지지 않는다고 가정한다.</p>

<p>문제는 C, C++, JAVA 또는 Python3을 이용하여 해결한다.</p>

<ol>
<li>C
<ol type="a">
<li>입력
<ul>
<li>scanf 사용</li>
<li>정수 %d, 실수 %f, 문자열 %s 사용</li>
<li>scanf("%d", &amp;var);</li>
</ul>
</li>
<li>출력
<ul>
<li>정수 %d, 실수 %f, 문자열 %s 사용</li>
<li>예) printf("%d", var);</li>
</ul>
</li>
<li>필수 라이브러리 stdio.h</li>
</ol>
</li>
<li>C++
<ol type="a">
<li>입력
<ul>
<li>cin 사용</li>
<li>예) cin &gt;&gt; var;</li>
</ul>
</li>
<li>출력
<ul>
<li>cout 사용</li>
<li>예) cout &lt;&lt; var;</li>
</ul>
</li>
<li>필수 라이브러리 iostream</li>
<li>권장사항
<ul>
<li>using namespace std;</li>
<li>ios::sync_with_stdio(false);</li>
<li>cin.tie(NULL);</li>
</ul>
</li>
</ol>
</li>
<li>Java
<ol type="a">
<li>입력
<ul>
<li>Scanner 사용</li>
<li>Scanner sc = new Scanner(System.in); 			정수: sc.nextInt(); 실수: sc.nextDouble(); 문자열: sc.nextLine(); 또는 sc.next();</li>
</ul>
</li>
<li>출력
<ul>
<li>System.out.println(var);</li>
</ul>
</li>
<li>필수 라이브러리 java.util.Scanner</li>
</ol>
</li>
</ol>

## 입력

<p>입력으로 첫 줄에 특정 년도를 알리는 정수 N이 주어진다. 정수 N은 1,946 부터 1,000,000 사이의 값이다. (1,946 ≤ N ≤ 1,000,000)</p>

## 출력

<p>출력으로 홍익대학교의 개교 주년을 나타내는 정수를 출력한다.</p>

## 소스코드

[소스코드 보기](홍익대학교.cpp)