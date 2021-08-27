#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

 string reverseWords(string s) {
      stringstream x(s);
      string r,word;
      
      while(x>>word){
          reverse(word.begin(),word.end());
          r+=word+" ";
      }
      return r.substr(0,r.length()-1); 
    }
int main() {
    //Call Func
	// your code goes here
	return 0;
}
 