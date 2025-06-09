using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
   long long addall=0;
    for(long long n = 1 ; n<=count; ++n){
      addall+= n*price;
        if(addall>money){
            answer= addall-money;
        }else if(addall==money){
            answer=0;        }
    }

    return answer;
}