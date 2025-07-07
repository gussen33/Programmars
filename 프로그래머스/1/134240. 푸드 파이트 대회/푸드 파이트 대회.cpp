#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(vector<int> food) {
    string answer = "";
    string s1 = "";
    string s2 = "";
for (int i = 1; i < food.size(); i++)
{
    int repeat = food[i] / 2;
    for (int j = 0; j < repeat; j++)
    {
        char ci = (char)(i + 48);
        s1.push_back(ci);
    }
}
   
    answer= s1+'0';
        reverse(s1.begin(), s1.end());
    answer+=s1;
    return answer;
}