#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void sortColors(vector<int>& nums) {
        //sort(nums.begin(),nums.end());
        int a=0,b=0,c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                a++;
            }
            else if(nums[i]==1){
                b++;
            }
            else{
                c++;
            }
        }
        vector<int> v;
        while(a--){
            v.push_back(0);
        }
        while(b--){
            v.push_back(1);
        }
        while(c--){
            v.push_back(2);
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=v[i];
        }
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
