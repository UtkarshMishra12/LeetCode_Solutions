#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

int countLargestGroup(int n) {
        vector<int> count(37,0);
        for(int i=1;i<=n;i++){
            count[calc_sum(i)]++;
        }
        int maxi=*max_element(count.begin(),count.end());
        int ans=0;
        for(auto i:count){
            if(i==maxi)ans++;
        }
        return ans;
    }
    int calc_sum(int n){
        return n==0?0:(n%10)+calc_sum(n/10);
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 