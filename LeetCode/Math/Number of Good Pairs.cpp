#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int numIdenticalPairs(vector<int>& nums) {
    int c=0;
    for(int i=0;i<nums.size()-1;i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]==nums[j]){
                c++;
            }
        }
    }
    return c;
}
int main() {
    //Call Fun
	// your code goes here
	return 0;
}
