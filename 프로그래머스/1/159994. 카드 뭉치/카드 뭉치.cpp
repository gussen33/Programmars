#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    int i = 0, j = 0; // cards1, cards2의 인덱스

    for (string word : goal) {
        if (i < cards1.size() && word == cards1[i]) {
            i++;
        } else if (j < cards2.size() && word == cards2[j]) {
            j++;
        } else {
            return "No";
        }
    }

    return "Yes";
}
 