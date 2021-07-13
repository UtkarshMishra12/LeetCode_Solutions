#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 vector<int> lexicalOrder(int n) {
        vector <string> v;
        for(int i=1;i<=n;i++){
           v.push_back(to_string(i)); 
        }
        sort(v.begin(),v.end());
        vector<int> ans;
        for (int i = 0; i < n; i++){
           ans.push_back(stoi(v[i]));
        }   
    return ans;
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
