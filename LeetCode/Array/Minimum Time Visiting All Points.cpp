#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int


 int minTimeToVisitAllPoints(vector<vector<int>>& v) {
        int time = 0;
       for(int i = 1;i<v.size();i++){
          time+= max(abs(v[i][0]-v[i-1][0]),abs(v[i][1]-v[i-1][1]));
       }
       return time;
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 