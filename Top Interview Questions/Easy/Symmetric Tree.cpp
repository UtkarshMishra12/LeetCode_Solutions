#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool isMirror(TreeNode * t1, TreeNode *t2) {
    if (t1 == NULL && t2 == NULL) return true;
    if (t1 == NULL || t2 == NULL)return false;
    return (t1->val == t2->val)
    && isMirror(t1->right, t2->left)
    && isMirror(t1->left, t2->right);
}
bool isSymmetric(TreeNode* root) {
    return isMirror(root,root); 
}
int main() {
    //Call Fn
	// your code goes here
	return 0;
}
