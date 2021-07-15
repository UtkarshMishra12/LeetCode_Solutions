#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int> sortedSquares(vector<int>& nums) {
        vector <int> v;
        for(auto i:nums){
            v.push_back(i*i);
        }
        sort(v.begin(),v.end());
    return v;
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
