#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int


string gcdOfStrings(string str1, string str2) {
        return str1 + str2 == str2 + str1 ? str1.substr(0, std::gcd(str1.length(), str2.length())) : "";
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 