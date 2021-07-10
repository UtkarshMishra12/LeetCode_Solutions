#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 int countOdds(int low, int high) {
        if(high%2!=0 || low%2!=0){
			return (high - low) / 2 + 1; 
		}
	return (high - low) / 2;
}
int main() {
    //Call Fun
	// your code goes here
	return 0;
}
