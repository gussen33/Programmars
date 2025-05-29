#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    int n =arr.size();
    double x =0;
    for(int i= 0 ; i<n; i++){
 x+=arr[i];
        
    }
    answer=x/n;
    return answer;
}