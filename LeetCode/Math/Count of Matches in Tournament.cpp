#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int numberOfMatches(int n) {
    if(n == 1){
		return 0;
	}
	if(n % 2 == 0){
		return n / 2 + numberOfMatches(n / 2);
	}
	if(n % 2 == 1){
		return (n - 1) / 2 + numberOfMatches((n - 1) / 2 + 1);
	}
	return 0;  
    }
};
int main() {
    //Call Fun
	// your code goes here
	return 0;
}
