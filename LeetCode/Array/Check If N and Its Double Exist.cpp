#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

 bool checkIfExist(vector<int>& arr) {
        /*int n=arr.size();
        sort(arr.begin(),arr.end());
        vector<int>::iterator it;
        for(int i=0;i<n-1;i++){
            int n=arr[i];
            int m=2*n;
            it=find(arr.begin(),arr.end(),m);
            if(it!=arr.end()){
                return true;
            }
        }
        return false;*/
        unordered_map<int,int> mp;
        
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]=i;
        }
        for(int i=0;i<arr.size();i++){
            if(mp.find(arr[i]*2)!=mp.end() && mp[arr[i]*2] != i){
                return true;
            }
        }
        return false;
    }
int main() {
    //Call Func
	// your code goes here
	return 0;
}
 