#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int sumBase(int n, int k) {
        int sum=0;
        while(n){
            sum+=n%k;
            n=n/k;
        }
        return sum;
}
int main() {
    //Call Fun
	// your code goes here
	return 0;
}
