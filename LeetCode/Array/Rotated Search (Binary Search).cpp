#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

int rotatedSearch(vector <int> &v,int t){
    int l=0;
    int h=v.size()-1;
    while(l<=h){
        //4,5,6,7,0,1,2
        //0 1 2 3 4 5 6
        int mid=(l+h)/2;
        if(v[mid]==t){
            return mid;
        }
        
        //Left Side is sorted
        if(v[l]<=v[mid]){
            //Figure out if the element lies on the left side or not
            if(t>=v[l] && t<=v[mid]){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        //Right half is sorted
        else{
            if(t>=v[mid] && t<=v[h]){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
    }
    return -1;
}

int main() {
    vector <int> v={4,5,6,7,0,1,2};
    cout<<rotatedSearch(v,0);
    cout<<endl;
    cout<<rotatedSearch(v,4);
    //Call Func
	// your code goes here
	return 0;
}
 