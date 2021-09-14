#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

bool isMonotonic(vector<int>& arr) {
        bool inc=true,dec=true;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]>arr[i+1]){
                inc=false;
            }
            if(arr[i]< arr[i+1]){
                dec=false;
            }
        }
        return inc || dec;
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 