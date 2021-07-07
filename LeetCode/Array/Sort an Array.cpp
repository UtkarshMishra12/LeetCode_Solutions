#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int> sortArray(vector<int>& nums) {
    int n=nums.size();
    vector <int> v(n,0);
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++){
        v[i]=nums[i];
    }
    return v;
}
int main() {
    //Call Fun
	// your code goes here
	return 0;
}
