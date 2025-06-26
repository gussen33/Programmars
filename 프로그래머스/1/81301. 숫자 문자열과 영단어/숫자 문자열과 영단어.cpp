#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(string s) {
    int answer = 0;
    map<string, int>wtn=
    {
        {"zero", 0}, {"one", 1}, {"two", 2},
        {"three", 3}, {"four", 4}, {"five", 5},
        {"six", 6}, {"seven", 7}, {"eight", 8},
        {"nine", 9} 
    };
    string x;
    string y;
for(char c : s)   //char c에 s의 char를 하나씩 넣는다
{
    if(c>='0'&&c<='9')  //c가 숫자일때
    {
        x+=c;           // string x는 c
    }else
    {
        y+=c;           // 알파벳일때 string y가 c
        if(wtn.count(y))   //y에 들어온 c때문에 단어가 완전해지면
        {
            x+=to_string(wtn[y]); // x에 스트링의 형태로 들어간다
            y="";                   //그뒤 y는 초기화
        }
    }
}
    answer=stoi(x);             // string인 x를 int로
    return answer;
}