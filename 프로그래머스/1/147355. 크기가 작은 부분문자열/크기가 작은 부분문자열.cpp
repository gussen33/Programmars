#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(string t, string p) {
    int answer = 0;
   int x = p.size();
    for(int i = 0 ; i<=t.size()-x; ++i){
        string substrT = t.substr(i,x);
    
        if(substrT<=p)
        {
            answer++;            
        }
        
        
    }
    return answer;
}