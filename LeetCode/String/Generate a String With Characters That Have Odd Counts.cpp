#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

 string generateTheString(int n) {
        string s="";
        if(n%2==0){
            while(n--){
                s+='a';
            }
            s[0]='b';
        }
        else{
            while(n--){
                s+='a';
            }
        }
        return s;
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 