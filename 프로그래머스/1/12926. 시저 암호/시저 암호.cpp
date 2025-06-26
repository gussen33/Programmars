#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s, int n) {
    string answer = "";
   
    for(int i = 0 ; i<s.size();i++)
    {  
      char x=s[i];
        if(x==' ')
        {
             answer+=' ';
        }else if(x>='a'&&x<='z')
        {
            answer+= (x-'a'+n)%26+'a';
        }else if(x>='A'&&x<='Z')
        {
            answer+=(x-'A'+n)%26+'A';
        }
    }
    return answer;
}