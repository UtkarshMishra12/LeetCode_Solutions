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

void changeTree(node *root){
    if(root==NULL) return;
    int child=0;
    if(root->left) child+=root->left->val;
    if(root->right) child+=root->right->val;
    
    if(child>=root->val) root->val=child;
    else{
        if(root->left) root->left->val=child;
        else if(root->right) root->right->val=child;
    }
    
    changeTree(root->left);
    changeTree(root->right);
    
    int tot=0;
    if(root->left) tot+=root->left->val;
    if(root->right) tot+=root->right->val;
    if(root->left || root->right) root->val=tot;
}

int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 