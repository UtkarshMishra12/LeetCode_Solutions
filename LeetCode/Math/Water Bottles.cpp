#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

 int numWaterBottles(int numB, int numE){
         int ans = 0, rem=0;
            while(numB > 0){
                ans += numB;
                numB+=rem;
                rem =numB%numE;
                numB/=numE;
            }
            return ans;
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 