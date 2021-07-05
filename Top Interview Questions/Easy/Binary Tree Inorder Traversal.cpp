#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void insert_in(TreeNode* root,vector<int>& ans){
        if(root == NULL){
            return ;
        }
        insert_in(root->left,ans);
        ans.push_back(root->val);
        insert_in(root->right,ans) ;
        
    }
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int> ans;
        insert_in(root,ans) ;
        return ans;
        
}
int main() {
    //Call Function
	// your code goes here
	return 0;
}
