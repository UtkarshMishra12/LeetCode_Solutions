#include <bits/stdc++.h>
using namespace std;
#define ll long long int
double trimMean(vector<int>& arr) {
        int trim = arr.size()/20;
        sort(arr.begin(), arr.end());
        return (double)accumulate(arr.begin()+trim, arr.end()-trim, 0) / (arr.size() - 2*trim);
    }
int main() {
    
	// your code goes here
	return 0;
}
