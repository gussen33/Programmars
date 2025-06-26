# [level 1] 시저 암호 - 12926 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/12926) 

### 성능 요약

메모리: 4.21 MB, 시간: 0.10 ms

### 구분

코딩테스트 연습 > 연습문제

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2025년 06월 26일 16:22:13

### 문제 설명

<p><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">어떤 문장의 각 알파벳을 일정한 거리만큼 밀어서 다른 알파벳으로 바꾸는 암호화 방식을 시저 암호라고 합니다.  예를 들어 "AB"는 1만큼 밀면 "BC"가 되고, 3만큼 밀면 "DE"가 됩니다. "z"는 1만큼 밀면 "a"가 됩니다. 문자열 s와 거리 n을 입력받아 s를 n만큼 민 암호문을 만드는 함수, solution을 완성해 보세요.</font></font></p>

<h5><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">제한 조건</font></font></h5>

<ul>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">공백은 아무리 밀어도 공백입니다.</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">s는 알파벳 소문자, 대문자, 공백으로만 이루어져 있습니다.</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">s의 길이는 8000이하입니다.</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">n은 1 이상, 25이하인 자연수입니다.</font></font></li>
</ul>

<h5><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">입출력 예</font></font></h5>
<table class="table">
        <thead><tr>
<th><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">에스</font></font></th>
<th><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">N</font></font></th>
<th><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">결과</font></font></th>
</tr>
</thead>
        <tbody><tr>
<td><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">"AB"</font></font></td>
<td><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">1</font></font></td>
<td><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">"기원전"</font></font></td>
</tr>
<tr>
<td><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">"와 함께"</font></font></td>
<td><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">1</font></font></td>
<td><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">"에이"</font></font></td>
</tr>
<tr>
<td><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">"a B z"</font></font></td>
<td><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">4</font></font></td>
<td><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">"e F d"</font></font></td>
</tr>
</tbody>
      </table>

> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges