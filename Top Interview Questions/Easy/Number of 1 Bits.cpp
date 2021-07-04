#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int hammingWeight(uint32_t n) {
    int sum = 0;
    while (n != 0) {
        sum++;
        n &= (n - 1);
    }
    return sum;
}
int main() {
    cout<<hammingWeight(10);
	// your code goes here
	return 0;
}
