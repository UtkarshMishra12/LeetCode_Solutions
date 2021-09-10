#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

  int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector <vector <int>> output(m , vector<int> (n, 0));
        int result = 0;

        for (int i = 0; i < indices.size(); i++)
        {
            for (int j = 0; j < n; j++)
                output[indices[i][0]][j]++;

            for (int j = 0; j < m; j++)
                output[j][indices[i][1]]++;
        }

        for(auto i : output)
            for(auto j : i)
                if(j % 2 == 1)
                    result++;
            
        return result;
    }  

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 