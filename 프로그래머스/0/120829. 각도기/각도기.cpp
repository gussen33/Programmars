#include <string>
#include <vector>

using namespace std;

int solution(int angle) {
    int answer = 1;
    
    if(90==angle)
    {
        answer=2;
    }else if(90 < angle && angle < 180)
    {
        answer = 3;
        
    }else if(angle==180)
    {
        answer = 4;
    }
        
    return answer;
}