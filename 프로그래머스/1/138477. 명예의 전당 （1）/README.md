# [level 1] 명예의 전당 (1) - 138477 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/138477) 

### 성능 요약

메모리: 3.95 MB, 시간: 0.79 ms

### 구분

코딩테스트 연습 > 연습문제

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2025년 07월 17일 09:48:08

### 문제 설명

<p><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">"명예의 전당"이라는 TV 프로그램에서는 매일 1명의 가수가 노래를 부르고, 시청자들의 문자 투표수로 가수에게 점수를 부여합니다. 매일 출연한 가수의 점수가 지금까지 출연 가수들의 점수 중 상위 k번째 이내이면 해당 가수의 점수를 명예의 전당이라는 목록에 올려 기념합니다.&nbsp;즉 프로그램 시작 이후 초기에 k일까지는 모든 출연 가수의 점수가 명예의 전당에 오르게 됩니다. k일 다음부터는 출연 가수의 점수가 기존의 명예의 전당 목록의 k번째 순위의 가수 점수보다 더 높으면, 출연 가수의 점수가 명예의 전당에 오르게 되고 기존의 k번째 순위의 점수는 명예의 전당에서 내려오게 됩니다.</font></font></p>

<p><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">이 프로그램에서는 매일 "명예의 전당"의 최하위 점수를 발표합니다. 예를 들어, </font></font><code>k</code><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> = 3이고, 7일 동안 진행된 가수의 점수가 [10, 100, 20, 150, 1, 100, 200]이라면, 명예의 전당에서 발표된 점수는 아래의 그림과 같이 [10, 10, 10, 20, 20, 100, 100]입니다.</font></font></p>

<p><img src="https://grepp-programmers.s3.ap-northeast-2.amazonaws.com/files/production/b0893853-7471-47c0-b7e5-1e8b46002810/%EA%B7%B8%EB%A6%BC1.png" title="" alt="그림1.png"></p>

<p><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">명예의 전당 목록의 점수의 개수 </font></font><code>k</code><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">, 1일부터 마지막 날까지 출연한 가수들의 점수인 </font></font><code>score</code><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">가 주어졌을 때, 매일 발표된 명예의 전당의 최하위 점수를 return하는 solution 함수를 완성해주세요.</font></font></p>

<h5><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">제한사항</font></font></h5>

<ul>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">3 ≤ </font></font><code>k</code><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">≤ 100</font></font></li>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">7 ≤ </font></font><code>score</code><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">의 길이 ≤ 1,000

</font></font><ul>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">0 ≤ </font></font><code>score[i]</code><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">≤ 2,000</font></font></li>
</ul></li>
</ul>

<hr>

<h5><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">입출력 예</font></font></h5>
<table class="table">
        <thead><tr>
<th><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">케이</font></font></th>
<th><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">점수</font></font></th>
<th><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">결과</font></font></th>
</tr>
</thead>
        <tbody><tr>
<td><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">3</font></font></td>
<td><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">[10, 100, 20, 150, 1, 100, 200]</font></font></td>
<td><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">[10, 10, 10, 20, 20, 100, 100]</font></font></td>
</tr>
<tr>
<td><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">4</font></font></td>
<td><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">[0, 300, 40, 300, 20, 70, 150, 50, 500, 1000]</font></font></td>
<td><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">[0, 0, 0, 0, 20, 40, 70, 70, 150, 300]</font></font></td>
</tr>
</tbody>
      </table>
<hr>

<h5><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">입출력 예 설명</font></font></h5>

<p><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">입출력 예 #1</font></font></strong></p>

<ul>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">문제의 예시와 같습니다.</font></font></li>
</ul>

<p><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">입출력 예 #2</font></font></strong></p>

<ul>
<li><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">아래와 같이, [0, 0, 0, 0, 20, 40, 70, 70, 150, 300]을 return합니다.
</font></font><img src="https://grepp-programmers.s3.ap-northeast-2.amazonaws.com/files/production/5175c32d-44d7-4b13-be47-360bbe6a553c/%EA%B7%B8%EB%A6%BC2.png" title="" alt="그림2.png"></li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges