#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
   
    for(int i=0; i < commands.size(); i++)  // commads 의 사이즈 만큼 반복
    {
          int x = commands[i][0];
          int y = commands[i][1];        
          int z = commands[i][2];   
       vector<int> sub(array.begin()+x-1,array.begin()+y);  // x번째 부터 시작 이라서 -1 해야함
        sort(sub.begin(), sub.end());
        answer.push_back(sub[z-1]);  //z번째를 넣는 거라 -1 해야함
        
    }
    return answer;
}