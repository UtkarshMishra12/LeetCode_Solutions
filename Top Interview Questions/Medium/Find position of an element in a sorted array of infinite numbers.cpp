#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

int search(vector<int>& nums, int target,int s, int e) {
        while(s<=e){
            int mid=(s+e)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
    return -1;
}
int findPos(vector <int> v,int target){
    int s=0;
    int e=1;
    
    //Condition for the target to lie in the range
    while(target>v[e]){
        int temp=e+1; //New start
        //Double the b=size of the box
        e= e+(e-s+1)*2; // end = previous end + sizeofbox*2
        s=temp;
    }
    
    return search(v,target,s,e);
}

int main() {
    vector <int> arr={3, 5, 7, 9, 10, 90, 100,140, 160, 170};
    int ans = findPos(arr, 10);
    cout<<ans;
    //Call Func
	// your code goes here
	return 0;
}
 