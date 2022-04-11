#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

node * inorderSucc(node *root,nodr * p){
    node *succ=NULL;
    while(root!=NULL){
        if(p->val<=root->val){
            root=root->right;
        }
        else{
            succ=root;
            root=root->left;
        }
    }
    return succ;
}

int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 