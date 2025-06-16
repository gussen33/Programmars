#include <string>      // 문자열(string) 사용을 위한 헤더
#include <vector>      // (이 코드는 벡터를 쓰진 않지만 일반적으로 포함됨)
#include <algorithm>   // transform, toupper, tolower 등의 함수 사용을 위한 헤더
using namespace std;

// 문자열을 변환하는 함수
string solution(string s) {
    string answer = ""; // 결과를 저장할 문자열
    int idx = 0;        // 각 단어 내에서 문자의 위치(인덱스)를 추적하는 변수

    // 문자열 전체를 한 글자씩 순회
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            // 현재 문자가 공백인 경우 (단어 구분)
            answer += ' '; // 공백을 결과 문자열에 그대로 추가
            idx = 0;       // 단어가 끝났으므로 인덱스를 0으로 초기화
        } else {
            // 공백이 아닌 경우 = 단어의 문자
            if (idx % 2 == 0) {
                // 짝수 번째 문자일 경우 → 대문자로 변환
                answer += toupper(s[i]);
            } else {
                // 홀수 번째 문자일 경우 → 소문자로 변환
                answer += tolower(s[i]);
            }
            idx++; // 다음 문자를 위해 인덱스 증가
        }
    }

    return answer; // 최종 결과 반환
}