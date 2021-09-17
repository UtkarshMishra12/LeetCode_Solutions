#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int


vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        map<int,int>m;
        vector <int> v;
        for(auto i:nums){
            m[i]++;
        }
        int dup=-1,mis=-1;
        for(int i=1;i<=n;i++){
            if(m[i]==2){
                v.push_back(i);
            }
        }
        for(int i=1;i<=n;i++){
            if(m[i]==0){
                v.push_back(i);
            }
        }
       return v;
    }
int main() {
    //Call Func
	// your code goes here
	return 0;
}
 