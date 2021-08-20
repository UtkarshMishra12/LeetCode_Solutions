#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())
            return false;
        if((s+s).find(goal)!=string::npos)
            return true;
        else
            return false;
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
 