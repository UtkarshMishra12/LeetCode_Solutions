#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int countNegatives(vector<vector<int>>& grid) {
        int c=0;
        for(auto row:grid){
            for(auto i:row){
                if(i<0){
                    c++;
                }
            }
        }
    return c;
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
