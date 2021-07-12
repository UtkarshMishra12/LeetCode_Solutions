#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int> m;
        int j=0;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
            if(m[nums[i]]<=2){
                nums[j++]=nums[i];
            }
        }
    return j;
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
