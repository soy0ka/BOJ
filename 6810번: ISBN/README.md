# 6810번: ISBN - <img src="https://static.solved.ac/tier_small/2.svg" style="height:20px" /> Bronze IV

<!-- performance -->

<!-- 문제 제출 후 깃허브에 푸시를 했을 때 제출한 코드의 성능이 입력될 공간입니다.-->

<!-- end -->

## 문제

[문제 링크](https://boj.kr/6810)

<p>The International Standard Book Number (ISBN) is a 13-digit code for identifying books. These numbers have a special property for detecting whether the number was written correctly.</p>

<p>The 1-3-sum of a 13-digit number is calculated by multiplying the digits alternately by 1’s and 3’s (see example) and then adding the results. For example, to compute the 1-3-sum of the number 9780921418948 we add</p>

<p>9 ∗ 1 + 7 ∗ 3 + 8 ∗ 1 + 0 ∗ 3 + 9 ∗ 1 + 2 ∗ 3 + 1 ∗ 1 + 4 ∗ 3 + 1 ∗ 1 + 8 ∗ 3 + 9 ∗ 1 + 4 ∗ 3 + 8 ∗ 1</p>

<p>to get 120.</p>

<p>The special property of an ISBN number is that its 1-3-sum is always a multiple of 10.</p>

<p>Write a program to compute the 1-3-sum of a 13-digit number. To reduce the amount of typing, you may assume that the first ten digits will always be 9780921418, like the example above. Your program should input the last three digits and then print its 1-3-sum. Use a format similar to the samples below.</p>

## 입력



## 출력



## 소스코드

[소스코드 보기](ISBN.cpp)