#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int> sortArrayByParity(vector<int>& nums) {
        vector <int> ve,vo;
        for(auto i:nums){
            if(i%2==0){
                ve.push_back(i);
            }
            else{
                vo.push_back(i);
            }
        }
        vector <int> v(ve);
        for(auto i:vo){
            v.push_back(i);
        }
    return v;
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
