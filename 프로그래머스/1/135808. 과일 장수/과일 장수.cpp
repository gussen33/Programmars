
#include <string>
#include <vector>
#include <algorithm>

int solution(int k, int m, std::vector<int> score) {
    int answer = 0;
    
    // 점수를 내림차순으로 정렬합니다.
    std::sort(score.begin(), score.end(), std::greater<int>());
    
    // m개씩 상자를 포장하며 이익을 계산합니다.
    for (int i = 0; i < score.size() / m; ++i) {
        // 상자 가격은 가장 낮은 점수 * m입니다.
        // 내림차순 정렬했으므로, m개씩 묶음의 마지막 사과가 최저 점수입니다.
        answer += score[(i + 1) * m - 1] * m;
    }
    
    return answer;
}