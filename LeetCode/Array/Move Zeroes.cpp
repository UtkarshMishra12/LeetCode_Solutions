#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void moveZeroes(vector<int>& nums) {
    vector <int> v;
    int c=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            c++;
        }
        else{
             v.push_back(nums[i]);
        }    
    }
    while(c--){
        v.push_back(0);
    }
        
    for(int i=0;i<nums.size();i++){
        nums[i]=v[i];
    }
        
}
int main() {
    
	// your code goes here
	return 0;
}
