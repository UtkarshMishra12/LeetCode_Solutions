#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back


// val>=key
int ceilBST(node * root, int key){
    int ceil=-1;
    while(root!=NULL){
        if(root->val==key){
            ceil=root->val;
            return ceil;
        }
        if(key>root->val){
            root=root->right;
        }
        else{
            ceil=root->val;
            root=root->left;
        }
    }
}

int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 