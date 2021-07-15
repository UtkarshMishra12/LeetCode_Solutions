#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int diagonalSum(vector<vector<int>>& mat) {
        int i = 0;
        int j = 0;
        int sum = 0;
        int n = mat.size();
        while(i < n && j < n)
        {
            sum += mat[i][j];
            mat[i][j] = 0;
            sum += mat[i][n-1-j];
            mat[i][n-1-j] = 0;
            i++;
            j++;
        }
        return sum;
    }
int main() {
    //Call Func
	// your code goes here
	return 0;
}
