#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int trailingZeroes(int n) {
    int ans = 0;
    while(n){
        n /= 5;
        ans += n;
    }
    return ans;
}
int main() {
    cout<<trailingZeroes(10);
	// your code goes here
	return 0;
}
