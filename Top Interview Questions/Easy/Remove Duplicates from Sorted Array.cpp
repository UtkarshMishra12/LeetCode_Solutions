#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
	if(n <= 1){
		return n;
	}
	int j = 0; 
	for(int i = 0; i < n - 1; i++){
		if(nums[i] != nums[i + 1]){
			nums[j++] = nums[i];             
		}    
	}
	nums[j++] = nums[n - 1];
	return j;
}
//STL
int RemoveDuplicates(vector<int>& nums) {
    nums.erase( unique( nums.begin(), nums.end() ), nums.end() );
    return nums.size();
}
int main() {
    int n;cin>>n;
    vector <int> v;
    for(ll i=0;i<n;i++){
        int a;cin>>a;
        v.push_back(a);
    }
    cout<<removeDuplicates(v)<<endl;
     cout<<RemoveDuplicates(v);
	// your code goes here
	return 0;
}
