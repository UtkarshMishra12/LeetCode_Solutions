#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

void recPerum(int idx,vector<int> &arr,vector<vector<int>> &ans){
    if(idx==arr.size()){
        ans.push_back(arr);
        return;
    }
    for(int i=idx;i<arr.size();i++){
        swap(arr[i],arr[idx]);
        recPerum(idx+1,arr,ans);
        swap(arr[i],arr[idx]);
    }
}

vector<vector<int>> perm(vector<int> &nums){
    vector<vector<int>> ans;
    recPerum(0,nums,ans);
    return ans;
}

int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 