#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

void duplicateZeros(vector<int>& arr) {
        int n = arr.size(), i = 0;
		while(i < n){
			if(arr[i] == 0){
				arr.insert(arr.begin() + i + 1, 0);
				arr.pop_back();
				i++;
			}   
			i++;
		}
		return;
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 