#include <bits/stdc++.h>
using namespace std;
#define ll long long int

 void deleteNode(ListNode* node) {
        node->val=(node->next)->val;
        node->next=(node->next)->next;
    }
int main() {
    //Call Function
	// your code goes here
	return 0;
}
