#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

  bool areAlmostEqual(string s1, string s2) {
        if (s1 == s2) { return true; }
        auto iter = std::mismatch(std::begin(s1), std::end(s1),std::cbegin(s2)).first;
        auto rter = std::mismatch(std::rbegin(s1), std::rend(s1), std::crbegin(s2)).first;
        std::swap(*iter, *rter);
        
        return s1 == s2;
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 