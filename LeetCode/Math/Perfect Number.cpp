#include <bits/stdc++.h>
using namespace std;
#define ll long long int
  bool checkPerfectNumber(int num) {
        if (num <= 0) {
            return false;
        }
        int sum = 0;
        for (int i = 1; i * i <= num; i++) {
            if (num % i == 0) {
                sum += i;
                if (i * i != num) {
                    sum += num / i;
                }

            }
        }
    return sum - num == num;
  }
int main() {
    //Call Func
	// your code goes here
	return 0;
}
