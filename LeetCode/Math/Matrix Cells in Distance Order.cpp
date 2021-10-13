#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

  vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        multimap<int,pair<int,int>>mm;
        vector<vector<int>>ans;
        for(int i=0;i<rows;i++)
            for(int j=0;j<cols;j++){
                int dist=abs(rCenter-i)+abs(cCenter-j);
                mm.insert(pair<int,pair<int,int>>(dist,pair<int,int>(i,j)));
            }
        auto itr=mm.begin();
       while(itr!=mm.end()){
           vector<int>temp(2);
           temp[0]=(itr->second.first);
           temp[1]=(itr->second.second);
           ans.push_back(temp);
           itr++;
       }
        return ans;
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 