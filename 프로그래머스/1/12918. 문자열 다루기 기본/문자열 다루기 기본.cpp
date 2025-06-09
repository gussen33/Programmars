#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(string s) {
    bool answer = true;
    if (s.size() != 4 && s.size() != 6){
        answer= false;
    }for(char c : s){
        if (c<'0'||c>'9'){
            return false;
        }
    }
    return answer;
}