#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

  int countBalls(int lowLimit, int highLimit) {
         
        vector<int> box (46,0);
        for(int i = lowLimit;i<=highLimit;i++){
            int sum = 0;
            int temp = i;
            while(temp){
                sum = sum + temp%10;
                temp = temp/10;
            }
            box[sum]++;
        }
        
        return *max_element(box.begin(),box.end());
    }
int main() {
    //Call Func
	// your code goes here
	return 0;
}
 