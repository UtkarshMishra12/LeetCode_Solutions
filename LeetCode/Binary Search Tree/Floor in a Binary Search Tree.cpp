#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back


// val<=key
int floorBST(node * root, int key){
    int ans=0;
    while(root!=NULL){
        if(root->val==key){
            ans=root->val;
            return ans;
        }
        if(key>root->val){
            ans=root->val;
            root=root->right;
        }
        else{
            root=root->left;
        }
    }
    return ans;
}

int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 