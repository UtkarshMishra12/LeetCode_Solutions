#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 int heightChecker(vector<int>& heights) {
        int c=0;
        vector <int> v(heights);
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            if(v[i]!=heights[i]){
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
