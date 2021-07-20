#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 int sumOddLengthSubarrays(vector<int>& arr) {
        int sz = arr.size();
        int sum = 0;
        
        for(int i=0; i<sz; i++){
            sum += ((i+1) * (sz-i)+1) / 2*arr[i];
        }
    return sum;
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
