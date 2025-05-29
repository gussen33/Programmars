#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    int i =1;
    while(i>0,n>0){
        i=n%10;
        answer.push_back(i);
        n/=10;
   
    }
    return answer;
}