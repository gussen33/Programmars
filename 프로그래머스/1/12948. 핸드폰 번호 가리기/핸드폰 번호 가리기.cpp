#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string phone_number) {
   
  
    int x =phone_number.size()-4;
   string back_number= phone_number.substr(phone_number.size()-4);
    string answer = string(x,'*')+back_number;
        
    return answer;
}