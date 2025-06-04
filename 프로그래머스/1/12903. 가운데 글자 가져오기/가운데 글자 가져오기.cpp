#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string s) {
      string answer = "";
 
    int len = s.length();

     char mid = s[len/2];
    if(len%2==0){
        char mid0 = s[len/2-1];
        answer+=mid0;
        answer+=mid;
        
    }else{
        answer += mid;
       }
    
    
    return answer;
}