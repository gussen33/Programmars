# [level 0] 양꼬치 - 120830 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/120830) 

### 성능 요약

메모리: 4.16 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩테스트 입문

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2025년 05월 27일 19:49:51

### 문제 설명

<p>머쓱이네 양꼬치 가게는 10인분을 먹으면 음료수 하나를 서비스로 줍니다. 양꼬치는 1인분에 12,000원, 음료수는 2,000원입니다. 정수 <code>n</code>과 <code>k</code>가 매개변수로 주어졌을 때, 양꼬치 <code>n</code>인분과 음료수 <code>k</code>개를 먹었다면 총얼마를 지불해야 하는지 return 하도록 solution 함수를 완성해보세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">0 &lt; </font></font><code>n</code><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">&lt; 1,000</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">n / 10 ≤ </font></font><code>k</code><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">&lt; 1,000</font></font></li>
<li>서비스로 받은 음료수는 모두 마십니다.</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">N</font></font></th>
<th><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">케이</font></font></th>
<th><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">결과</font></font></th>
</tr>
</thead>
        <tbody><tr>
<td><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">10</font></font></td>
<td><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">3</font></font></td>
<td><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">12만 4천</font></font></td>
</tr>
<tr>
<td><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">64</font></font></td>
<td><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">6</font></font></td>
<td><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">768,000</font></font></td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>10인분을 시켜 서비스로 음료수를 하나 받아 총 10 * 12000 + 3 * 2000 - 1 * 2000 = 124,000원입니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>64인분을 시켜 서비스로 음료수를 6개 받아 총 64 * 12000 + 6 * 2000 - 6 * 2000 =768,000원입니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges