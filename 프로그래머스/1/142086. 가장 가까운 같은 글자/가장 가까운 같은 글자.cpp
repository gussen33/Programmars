#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> solution( string s) {
    vector<int> answer;
    unordered_map<char, int> lastIndex; // 각 문자의 마지막 등장 인덱스

    for (int i = 0; i < s.size(); ++i) {
        char c = s[i];

        if (lastIndex.find(c) != lastIndex.end()) {
            answer.push_back(i - lastIndex[c]); // 현재 위치 - 마지막 등장 위치
        } else {
            answer.push_back(-1); // 처음 나온 문자
        }

        lastIndex[c] = i; // 현재 문자의 마지막 위치 업데이트
    }

    return answer;
}