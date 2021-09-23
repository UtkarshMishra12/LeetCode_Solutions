#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

 bool judgeCircle(string moves) {
      int r=0,l=0;
      for(auto i:moves){
          if(i=='R'){
              r++;
          }
          else if(i=='L'){
              r--;
          }
          else if(i=='U'){
              l++;
          }
          else if(i=='D'){
              l--;
          }
      }
       if(r==0 && l==0){
           return true;
       } 
        return false;
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 