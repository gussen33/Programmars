#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer = arr;

    if (arr.size() <= 1) {
        return {-1};  // 배열이 1개 이하일 경우 -1 반환 (문제 조건에 따라)
    }

    // 최소값 구하기
    int min_value = *min_element(arr.begin(), arr.end());

    // 최소값 위치 찾기
    auto it = find(answer.begin(), answer.end(), min_value);

    // 최소값 제거
    answer.erase(it);

    return answer;
}