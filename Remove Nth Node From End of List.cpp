    ListNode* removeNthFromEnd(ListNode* head, int n){
        ListNode* dummyhead = new ListNode(0);
        dummyhead->next = head;
        
        ListNode* slow = dummyhead;
        ListNode* fast = dummyhead;
        
        for(int i=1; i<=n+1; i++){
            fast = fast->next;
        }
        
        while(fast!=NULL){
            slow = slow->next;
            fast = fast->next;
        }
        
        // fast is now NULL and slow points to the node before the node to be deleted
        slow->next = slow->next->next;
        
        return dummyhead->next;
        
    }
    
