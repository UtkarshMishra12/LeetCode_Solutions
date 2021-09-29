#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

 int finalValueAfterOperations(vector<string>& opr) {
         int a = 0 ;
        for( auto x : opr ){
            if ( x[1] == '+' ){
                a = a + 1 ;
            }else{
                a = a - 1 ;
            }
        }
        return a;
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 