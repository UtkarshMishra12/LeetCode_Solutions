#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

 TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return NULL;
        int val=root->val;
        if(val<p->val && val<q->val){
            return lowestCommonAncestor(root->right,p,q);
        }
        if(val>p->val && val>q->val){
            return lowestCommonAncestor(root->left,p,q);
        }
        else{
            return root;
        }
    }

int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 