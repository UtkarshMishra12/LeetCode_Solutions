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
    node* right;

};

node * lca(node *root, node *p, node *q){
    if(root==NULL || root==p || root==q){
        return root;
    }
    
    node * left=lca(root->left,p,q);
    node * right=lca(root->right,p,q);
    
    if(left==NULL) return right;
    if(right==NULL) return left;
    else return root;
}
int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 