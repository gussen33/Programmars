#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(int n) {
    int answer = 0;
    string s;
    while(n>0){
     s.push_back(n%3); 
        n/=3; 
        }
    reverse(s.begin(), s.end());
    for(int i = 0 ; i<s.size(); i++){
        char x = s[i];
        int y = pow(3,i);
        answer += x*y;
    }
    return answer;
}