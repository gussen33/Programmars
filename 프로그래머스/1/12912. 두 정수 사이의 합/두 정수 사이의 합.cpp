#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long minVal = min(a, b);
    long long maxVal = max(a, b);
    long long count = maxVal - minVal + 1;
    return (minVal + maxVal) * count / 2;
}