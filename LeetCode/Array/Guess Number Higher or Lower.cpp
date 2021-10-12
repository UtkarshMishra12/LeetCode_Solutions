#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

int guessNumber(int n) {
        int s=1;
        int e=n;
        while(s<=e){
            int mid= s+(e-s)/2;
            int ans=guess(mid);
            if(ans==0){
                return mid;
            }
            else if(ans>0){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return -1;
        /*for(int i=1;i<n;i++){
            if(guess(i)==0){
                return i;
            }
        }
        return n;*/
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 