# [level 0] 배열의 평균값 - 120817 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/120817) 

### 성능 요약

메모리: 3.81 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩테스트 입문

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2025년 05월 28일 11:35:46

### 문제 설명

<p><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">정수 배열 </font></font><code>numbers</code><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">가 매개변수로 주어집니다. </font></font><code>numbers</code><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">의 원소의 평균값을 return하도록 solution 함수를 완성해주세요.</font></font></p>

<hr>

<h5><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">제한사항</font></font></h5>

<ul>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">0 ≤ </font></font><code>numbers</code><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">의 원소 ≤ 1,000</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">1 ≤ </font></font><code>numbers</code><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">의 길이 ≤ 100</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">정답의 소수 부분이 .0 또는 .5인 경우만 입력으로 주어집니다.</font></font></li>
</ul>

<hr>

<h5><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">입출력 예</font></font></h5>
<table class="table">
        <thead><tr>
<th><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">숫자</font></font></th>
<th><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">결과</font></font></th>
</tr>
</thead>
        <tbody><tr>
<td><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">[1, 2, 3, 4, 5, 6, 7, 8, 9, 10]</font></font></td>
<td><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">5.5</font></font></td>
</tr>
<tr>
<td><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">[89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99]</font></font></td>
<td><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">94.0</font></font></td>
</tr>
</tbody>
      </table>
<hr>

<h5><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">입출력 예 설명</font></font></h5>

<p><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">입출력 예 #1</font></font></p>

<ul>
<li><code>numbers</code><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">의 원소들의 평균 값은 5.5입니다.</font></font></li>
</ul>

<p><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">입출력 예 #2</font></font></p>

<ul>
<li><code>numbers</code><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">의 원소들의 평균 값은 94.0입니다.</font></font></li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges