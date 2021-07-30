#include <bits/stdc++.h>
using namespace std;
#define ll long long int

 bool areOccurrencesEqual(string s) {
       map<char, int> map;
        
        for(auto a:s)
            map[a]++;
        
        int count=map[s[0]];
        for(auto i:map)
            if(count!=i.second)
                return false;
        
    return true;
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
