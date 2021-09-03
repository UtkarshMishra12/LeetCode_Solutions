#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

 int maxPower(string s) {
        int se=1;
        int max=0;
        for(int i=0;i<s.length();i++){   
            if(s[i]==s[i+1])
            {   
                if(se>max)
                {
                    max=se;
                }
                se++;
            }
            else
                se=1;
            
        }
        return max+1;
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 