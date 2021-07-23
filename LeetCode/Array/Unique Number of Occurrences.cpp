#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> m;
        for(auto i:arr){
            m[i]++;
        }
    
        set<int>s;
        for(auto it:m)
            s.insert(it.second);
        
    return m.size()==s.size();
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
