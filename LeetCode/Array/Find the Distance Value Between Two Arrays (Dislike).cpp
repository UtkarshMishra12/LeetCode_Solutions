#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int c=0;
       for(int i=0;i<arr1.size();i++){
          bool prime=true;
          for(int j=0;j<arr2.size();j++){
              if(abs(arr1[i]-arr2[j])<=d){
                prime=false;
                break;
             }
          }
       if(prime)
         c++;
      }
    return c;
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 