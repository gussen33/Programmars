long long solution(int a, int b) {
    long long x = a;  /*a,b 가 변하지 않게 x,y로 대체(a,b는 첫번째 while문에서 바뀔경우 뒤에서 사용이 힘들어짐)*/
    long long y = b;
    long long answer = 0;
    if (x<y){
    while (x < y) {   /*x<y라면 x에는 +1 y에는 -1를 반복하면서 더하기*/
        answer += x + y;
        x++;
        y--;
    }
}else if(x > y){
    while(x > y){       /*x>y라면 x에는 -1 y에는 +1를 반복하면서 더하기*/
        answer += x + y;
        x--;
        y++;
    }
}
    if (x == y) answer += x; /*만약 같다면 그냥x를 출력*/

    return answer;
}