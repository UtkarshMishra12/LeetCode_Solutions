#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

  int numOfStrings(vector<string>& patterns, string word) {
        int c=0;
        for(auto i:patterns){
             if(word.find(i)!=string::npos){
                    c++;
                }
        }
        return c;
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 