#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int findLucky(vector<int>& arr) {
        unordered_map <int,int> m;
        for(auto i:arr){
            m[i]++;
        }
        int c=0;
        for(auto i:m){
            if(i.first==i.second){
                c=max(c,i.first);
            }
        }
        if(c==0){
            return -1;
        }
    return c;
}
int main() {
    
	// your code goes here
	return 0;
}
