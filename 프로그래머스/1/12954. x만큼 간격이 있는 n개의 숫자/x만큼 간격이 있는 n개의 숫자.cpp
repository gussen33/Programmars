#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;

    for(int a = 1; a<=n; ++a){
    
      answer.push_back(a*x);
    }
    return answer;
}