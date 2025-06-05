#include <string>
#include <vector>
#include <cmath>
using namespace std;



int solution(int left, int right) {
    int answer = 0;
    for (int i = left; i <= right; i++) { //left에 ++해주기 right 까지
        int root = (int)sqrt(i);        // i(left+=)는 root의 제곱
        if (root * root == i) {         // root의 제곱을 했을때 i가 나오면 제곱수 라는 것 
            // sqrt를 int로 타입을 정했기 때문에 뒤에 소숫 점이 날라가서 제곱수가 아니면if문이 성립하지 않음
            answer -= i; // 제곱수면 약수 개수 홀수 → 빼기
        } else {
            answer += i;
        }
    }
    return answer;
}
   
