#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        
        int sz = 1;
        while(temp->next!=NULL){
            sz++;
            temp = temp->next;
        }
    
         sz = sz-n;
         if(sz==0){
             head = head->next;
             return head;
         }
        
        temp = head;
        int cnt = sz-1;
        while(cnt--){
            temp = temp->next;
        }
        
        temp->next = temp->next->next;
        
        return head;
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 