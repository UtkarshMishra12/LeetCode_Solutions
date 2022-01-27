#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

 ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k==0){
            return head;
        }
        ListNode *cur=head;
        int len=1;
        while(cur->next!=NULL){
            cur=cur->next;
            len++;
        }
        cur->next=head;
        k=k%len;
        k=len-k; 
        
        while(k--){
            cur=cur->next;
        }
        head=cur->next;
        cur->next=NULL;
        return head;
    }


int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 