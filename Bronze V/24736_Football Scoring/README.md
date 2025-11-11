# 24736번: Football Scoring - <img src="https://static.solved.ac/tier_small/1.svg" style="height:20px" /> Bronze V

<!-- performance -->

<!-- 문제 제출 후 깃허브에 푸시를 했을 때 제출한 코드의 성능이 입력될 공간입니다.-->

<!-- end -->

## 문제

[문제 링크](https://boj.kr/24736)

<p>There are five ways to score points in american professional football:</p>

<ol>
<li>Touchdown - 6 points</li>
<li>Field Goal - 3 points</li>
<li>Safety - 2 points</li>
<li>After touchdown
<ol style="list-style-type:lower-alpha;">
<li>1 point (Field Goal or Safety) - Typically called the “Point after”</li>
<li>2 points (touchdown) - Typically called the “Two-point conversion”</li>
</ol>
</li>
</ol>

<p>(<a href="https://operations.nfl.com/the-rules/nfl-video-rulebook/scoring-plays/">https://operations.nfl.com/the-rules/nfl-video-rulebook/scoring-plays/</a>)</p>

<p>Given the box score values for two competing teams, calculate the point total for each team.</p>

## 입력

<p>There are two lines of input each containing five space-separated non-negative integers, T, F, S, P and C representing the number of Touchdowns, Field goals, Safeties, Points-after-touchdown and two-point Conversions after touchdown respectively. (0 ≤ T ≤ 10), (0 ≤ F ≤ 10), (0 ≤ S ≤ 10), (0 ≤ (P+C) ≤ T). The first line represents the box score for the visiting team, and the second line represents the box score for the home team.</p>

## 출력

<p>The single output line consists of two space-separated integers showing the visiting score and the home score respectively.</p>

## 소스코드

[소스코드 보기](Football%20Scoring.cpp)