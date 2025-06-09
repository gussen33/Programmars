#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string solution(string s) {
    sort(s.begin(), s.end(), greater<char>());  // 문자들을 내림차순 정렬 greater<타입>은 내림차순으로 정렬하는 것
    return s;
}

int main() {
    string s = "Zbcdefg";
    cout << solution(s) << endl;  // 출력: gfedcbZ
    return 0;
}