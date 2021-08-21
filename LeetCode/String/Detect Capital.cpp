#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

 bool detectCapitalUse(string word) {
        string a, b, c; 
        a = b = c = word;
        
        transform(a.begin(), a.end(), a.begin(), ::toupper);
        transform(b.begin(), b.end(), b.begin(), ::tolower);
        c = b;
        c[0] = toupper(c[0]);
        
        return word == a || word == b || word == c;
    }
int main() {
   
	// your code goes here
	return 0;
}
 