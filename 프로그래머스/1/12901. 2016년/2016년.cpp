#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    
      int daysInMonth[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string week[7] = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    int totaldays=0;
    int weekpoint;
    
    for(int i = 0 ; i<a-1 ; i++)
    {
        totaldays+= daysInMonth[i];
    }
    totaldays+=b-1;
    weekpoint= totaldays%7;
    answer=week[weekpoint];
    
    
    return answer;
}
