#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

class node{
    public:
    int val;
    node *left;
    node *right;
    node(int val_){
        val=val_;
        left=right=NULL;
    }
};


 bool isSymmetric(TreeNode* root) {
        return root==NULL || isSym(root->left,root->right);
    }
    
    bool isSym(TreeNode * left, TreeNode *right){
        if(left==NULL || right==NULL) return (left==right);
        
        if(left->val!=right->val)return false;
        return isSym(left->left,right->right) && isSym(left->right,right->left);
    }

vector<int> rightView(node *root){
    vector<int> ans;
    rs(root,0,ans);
    return ans;
}


int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 