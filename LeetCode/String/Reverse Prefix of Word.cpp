#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

 string reversePrefix(string word, char ch) {
        auto k=word.find(ch);
        reverse(word.begin(),word.begin()+k+1);
        return word;
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 