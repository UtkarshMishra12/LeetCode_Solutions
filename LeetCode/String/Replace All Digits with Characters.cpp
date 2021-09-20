#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

 string replaceDigits(string s) {
        for(int i=0 ; i<s.size();i++){
            if(isdigit(s[i])){
                s[i]=s[i-1] +s[i]-48;
            }
        }
        return s;
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 