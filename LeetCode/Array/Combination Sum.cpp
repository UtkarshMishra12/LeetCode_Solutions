#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

 void subSetSum(int idx,int target,vector<int> &arr,vector<int> &ds,vector<vector<int>> &ans){
        if(idx==arr.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        
        //Pick the element
        if(arr[idx]<=target){
            ds.push_back(arr[idx]);
            subSetSum(idx,target-arr[idx],arr,ds,ans);
            ds.pop_back();
        }
        
        subSetSum(idx+1,target,arr,ds,ans);
    }
        
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector <vector<int>> ans;
        vector <int> ds;
        subSetSum(0,target,arr,ds,ans);
        return ans;
    }

int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 