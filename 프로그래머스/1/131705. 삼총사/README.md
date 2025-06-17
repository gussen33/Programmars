# [level 1] 삼총사 - 131705 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/131705) 

### 성능 요약

메모리: 4.13 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 연습문제

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2025년 06월 17일 14:18:02

### 문제 설명

<p><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">한국중학교에 다니는 학생들은 각자 정수 번호를 갖고 있습니다. 이 학교 학생 3명의 정수 번호를 더했을 때 0이 되면 3명의 학생은 삼총사라고 합니다. 예를 들어, 5명의 학생이 있고, 각각의 정수 번호가 순서대로 -2, 3, 0, 2, -5일 때, 첫 번째, 세 번째, 네 번째 학생의 정수 번호를 더하면 0이므로 세 학생은 삼총사입니다. 또한, 두 번째, 네 번째, 다섯 번째 학생의 정수 번호를 더해도 0이므로 세 학생도 삼총사입니다. 따라서 이 경우 한국중학교에서는 두 가지 방법으로 삼총사를 만들 수 있습니다.</font></font></p>

<p><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">한국중학교 학생들의 번호를 나타내는 정수 배열 </font></font><code>number</code><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">가 매개변수로 주어질 때, 학생들 중 삼총사를 만들 수 있는 방법의 수를 return 하도록 solution 함수를 완성하세요.</font></font></p>

<hr>

<h5><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">제한사항</font></font></h5>

<ul>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">3 ≤ </font></font><code>number</code><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">의 길이 ≤ 13</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">-1,000 ≤ </font></font><code>number</code><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">의 각 원소 ≤ 1,000</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">서로 다른 학생의 정수 번호가 같을 수 있습니다.</font></font></li>
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
<td><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">[-2, 3, 0, 2, -5]</font></font></td>
<td><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">2</font></font></td>
</tr>
<tr>
<td><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">[-3, -2, -1, 0, 1, 2, 3]</font></font></td>
<td><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">5</font></font></td>
</tr>
<tr>
<td><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">[-1, 1, -1, 1]</font></font></td>
<td><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">0</font></font></td>
</tr>
</tbody>
      </table>
<hr>

<h5><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">입출력 예 설명</font></font></h5>

<p><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">입출력 예 #1</font></font></strong></p>

<ul>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">문제 예시와 같습니다.</font></font></li>
</ul>

<p><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">입출력 예 #2</font></font></strong></p>

<ul>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">학생들의 정수 번호 쌍 (-3, 0, 3), (-2, 0, 2), (-1, 0, 1), (-2, -1, 3), (-3, 1, 2) 이 삼총사가 될 수 있으므로, 5를 return 합니다.</font></font></li>
</ul>

<p><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">입출력 예 #3</font></font></strong></p>

<ul>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">삼총사가 될 수 있는 방법이 없습니다.</font></font></li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges