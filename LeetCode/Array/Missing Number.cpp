#include <bits/stdc++.h>
using namespace std;
#define ll long long int

 int missingNumber(vector<int>& nums) {
    int sum=0;
    int n=nums.size();
    for(auto i:nums){
        sum+=i;
    }
    return n*(n+1)/2 - sum;
        
}
   
int main() {
    vector <int> v={0,1,3};
    cout<<missingNumber(v);
	// your code goes here
	return 0;
}
