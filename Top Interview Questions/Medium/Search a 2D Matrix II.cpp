#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //TLE
        /*for(auto row:matrix){
            for(auto i:row){
                //v.push_back(i);
                if(i==target)return true;
            }
        }
        return false;*/
        
        //68 ms 99.00% Fater
        int m=matrix.size();
        int n=matrix[0].size();
        int r=0,c=n-1;
        while (r<m && c>=0) {
            int tmp = matrix[r][c];
            if (tmp==target){
                return true;
            } 
            if (tmp<target) r++;
            else c--;
        }
    return false;
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
