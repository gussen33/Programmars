#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 1;
    
    
    for(int i = 0; i<sizes.size(); ++i)
    {
        int max= sizes[0][i];
        if(sizes[i][0]<sizes[i][1]){
            swap(sizes[i][0],sizes[i][1]);   // 배열이 큰수,작은수의 형태로 정렬
        }
    }
    int maxw=0;
    int maxh=0;
    for(int j = 0 ; j < sizes.size(); ++j )
    {
        maxw= max(maxw,sizes[j][0]);
        maxh= max(maxh,sizes[j][1]);
        
    }
    answer= maxw*maxh;
    
    return answer;
}