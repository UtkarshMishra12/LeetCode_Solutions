#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

int maxNumberOfBalloons(string s) {
        int b=0,a=0,l=0,o=0,n=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='b'){
                b++;
            }
            else if(s[i]=='a'){
                a++;
            }
            else if(s[i]=='l'){
                l++;
            }
            else if(s[i]=='o'){
                o++;
            }
            else if(s[i]=='n'){
                n++;
            }
        }
        l/=2;
        o/=2;
        return min({b,a,l,o,n});
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 