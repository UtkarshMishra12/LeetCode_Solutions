#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

string defangIPaddr(string address) {
        string s,a={"[.]"};
        for(int i=0;i<address.size();i++){
           if(address[i]=='.'){
              s=s+a;
           }
          else
          s=s+address[i];
       }
     return(s);
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 