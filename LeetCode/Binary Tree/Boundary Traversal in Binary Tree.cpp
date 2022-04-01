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
    node*left;
    node *right;
    node(int val_){
        val=val_;
        left=right=NULL;
    }
};


bool isLeaf(node *root){
    if(root->left && root->right) return true;
    return false;
}

void addLeft(node *root, vector<int>&ans){
    node*cur=root->left;
    while(cur){
        if(!isLeaf(cur))ans.push_back(cur->val);
        if(cur->left)cur=cur->left;
        else cur=cur->right;
    }
}

void addRight(node *root,vector<int>&ans){
    node *cur=root;
    vector <int> temp;
    while(cur){
        if(!isLeaf(cur))temp.push_back(cur->val);
        if(cur->right)cur=cur->right;
        else cur=cur->left;
    }
    for(int i=temp.size()-1;i>=0;i--){
        ans.push_back(temp[i]);
    }
}

void addLeaf(node *root, vector<int> &ans){
    if(isLeaf(root)){
       ans.push_back(root->val);
       return;
    }
    if(root->left)addLeft(root->left,ans);
    if(root->right)addRight(root->right,ans);
}

vector<int> boundaryTrvaersal(node *root){
    vector<int> ans;
    if(root==NULL) return ans;
    if(!isLeaf(root)) ans.push_back(root->val);
    addLeft(root,ans);
    addLeaf(root,ans);
    addRight(root,ans);
}

int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 