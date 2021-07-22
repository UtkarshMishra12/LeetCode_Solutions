#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 vector<int>fre(26,0); int n(0);
        for(auto ch:allowed) fre[ch-'a']++;
        for(auto y: words)
            for(auto x: y)
                if(fre[x-'a']==0) {
                    n++;
                    break;
                }
        return words.size()-n;
    }
int main() {
    //Call Func
	// your code goes here
	return 0;
}
