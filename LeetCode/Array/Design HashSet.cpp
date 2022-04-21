#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

 vector<bool> ans;
    MyHashSet() {
        ans.resize(1e6+1,false);
    }
    
    void add(int key) {
        ans[key]=true;
    }
    
    void remove(int key) {
        ans[key]=false;
    }
    
    bool contains(int key) {
        return ans[key];
    }
};


int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 