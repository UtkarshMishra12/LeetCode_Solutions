#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

 void inorder(TreeNode *root,vector<int>&vals){
        if(root==NULL) return;
        inorder(root->left,vals);
        vals.push_back(root->val);
        inorder(root->right,vals);
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> vals;
        inorder(root,vals);
        TreeNode * ans = new TreeNode(vals[0]);
        TreeNode *cur=ans;
        for(auto it:vals){
            cur->right=new TreeNode(it);
            cur=cur->right;
        }
        return ans->right;
    }


int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 