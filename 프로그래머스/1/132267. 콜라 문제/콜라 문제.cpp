#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;

    while (n >= a) {
        int exchanged = (n / a);          // 교환 가능한 횟수
        answer += exchanged * b;          // 그만큼 새 병을 받음
        n = (n % a) + (exchanged * b);    // 남은 병 + 새 병으로 갱신
    }

    return answer;
}