#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

string getPermutation(int n,int k){
    int fact=1;
    vector <int> nums;
    for(int i=1;i<n;i++){
        fact=fact*i;
        nums.push_back(i);
    }
    nums.push_back(n);
    string ans="";
    k=k-1;
    while(true){
        ans+=to_string(nums[k/fact]);
        nums.erase(nums.begin()+k/fact);
        if(nums.size()==0){
            break;
        }
        k=k%fact;
        fact=fact/nums.size();
    }
    return ans;
}

int main() {
     cout<<getPermutation(4,17);
    
    //Call Func
	// your code goes here
	return 0;
}
 