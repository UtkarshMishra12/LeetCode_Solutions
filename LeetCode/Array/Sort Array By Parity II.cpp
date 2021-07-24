#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int> sortArrayByParityII(vector<int>& nums) {
        /*vector <int> ve,vo,v;
        for(auto i:nums){
            if(i%2==0){
                ve.push_back(i);
            }
            else{
                vo.push_back(i);
            }
        }
        int i=0,j=0;
        while(i<ve.size() && j<vo.size()){
            v.push_back(ve[i]);
            v.push_back(vo[j]);
            i++;
            j++;
        }
        return v;*/
        vector <int> v(nums.size(),0);
        int l=0;
        int r=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                v[l]=nums[i];
                l+=2;
            }
            else{
                v[r]=nums[i];
                r+=2;
            }
        }
        return v;
    }
int main() {
    //Call Func
	// your code goes here
	return 0;
}
