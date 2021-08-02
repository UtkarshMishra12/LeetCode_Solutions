#include <bits/stdc++.h>
using namespace std;
#define ll long long int
  bool isThree(int n) {
         int primes[27] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101};
        
        for(int i=0; i<27; i++){
            if(primes[i]*primes[i] == n) return true;
        }
        return false;
  }
int main() {
    //Call Func
	// your code goes here
	return 0;
}
