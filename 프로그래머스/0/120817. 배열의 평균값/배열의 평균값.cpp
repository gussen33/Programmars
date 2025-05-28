#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    int i=0;
   double a= 0;
    int n= numbers.size();
  for(i=0;i<n;i++){
      a+=numbers[i];
  }
    answer= a/n;
    return answer;
}