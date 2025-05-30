#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int n = 0;
  int m = x;
while(m>0){
    n += m%10;
    m/=10;
}
if (x%n==0){
     return answer;
}else{
    answer= false;
        return answer;
}
    
  
}