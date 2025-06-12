#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int x = (n>m)? n:m;
    
    for(int i =x ; i>0 ; --i){
        if(n%i==0 && m%i==0){
            answer.push_back(i);
            answer.push_back(n*m/i);
            break;
        }
    }
    return answer;
}