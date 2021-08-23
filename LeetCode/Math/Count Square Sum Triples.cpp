#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

int countTriples(int n) {
        unordered_map <int, int> mp;
        int cnt=0;
        for(int i=1;i<=n;i++)
            mp[i*i]=i;
        
        for(int i=1;i<=n;i++){
         for(int j=i;j<=n;j++){
             if(mp.find(i*i + j*j)!=mp.end())
                 cnt++;
          }   
        }
        return 2*cnt;
    }
int main() {
   
	// your code goes here
	return 0;
}
 