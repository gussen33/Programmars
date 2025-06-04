#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string s) {
      string answer = "";
 
    int len = s.length();
   int x =(len)/2;
     char mid = s[x];
    if(len%2==0){
        char mid0 = s[x-1];
        answer+=mid0;
        answer+=mid;
        
    }else{
        answer += mid;
       }
    
    
    return answer;
}