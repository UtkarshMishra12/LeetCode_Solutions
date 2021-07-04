#include <bits/stdc++.h>
using namespace std;
#define ll long long int

TreeNode *solve(vector<int>& v, int s, int e){
    if(s>e){
        return NULL;
    }
    int mid=(s+e)/2;
    TreeNode * root=new TreeNode(v[mid]);
    root->left=solve(v,s,mid-1);
    root->right=solve(v,mid+1,e);
        
    return root;
}
    
TreeNode* sortedArrayToBST(vector<int>& nums) {
    return solve(nums,0,nums.size()-1);
}
int main() {
    //Call BST
    ConvertArratToBST(nums,0,nums.size());
	// your code goes here
	return 0;
}
