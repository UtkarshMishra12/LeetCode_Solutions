#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int


 int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> mp={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
         set<string> ss;
         for(string x : words) {
             string encode="";
             for(char ch : x) encode+=mp[ch-'a'];
             ss.insert(encode);
         }
       return ss.size();
    }
int main() {
    //Call Func
	// your code goes here
	return 0;
}
 