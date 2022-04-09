#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

 TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL) return new TreeNode(val);
        TreeNode * cur=root;
        while(true){
            if(cur->val>=val){
                if(cur->left!=NULL)cur=cur->left;
                else{
                    cur->left=new TreeNode(val);
                    break;
                }
            }
            else{
                if(cur->right!=NULL) cur=cur->right;
                else{
                    cur->right=new TreeNode(val);
                    break;
                }
            }
        }
        return root;
    }

int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 