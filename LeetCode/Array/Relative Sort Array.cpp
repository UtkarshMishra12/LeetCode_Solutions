#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector <int> ans;
        map <int,int> mp;
        for(auto i:arr1){
            mp[i]++;
        }
        for(auto x:arr2){
            if(mp.find(x)!=mp.end()){
                auto xx=mp.find(x);
                int count=xx->second;
                vector <int> v(count,x);
                ans.insert(ans.end(),v.begin(),v.end());
                mp.erase(x);
            }
        }
        
        for(auto i:mp){
            int ele=i.first;
            int count=i.second;
            vector <int> v(count,ele);
            ans.insert(ans.end(),v.begin(),v.end());
        }
        return ans;
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 