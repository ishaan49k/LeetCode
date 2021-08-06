ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
    ListNode* ans = new ListNode(0); 
    ListNode* p1 = l1;
    ListNode* p2 = l2; 
    ListNode* curr = ans;  
    int carry = 0;
    
    while(p1!=NULL || p2!=NULL){ 
        int x, y;
        if(p1!=NULL){
            x = p1->val;
        }else{
            x = 0;
        }
        
        if(p2!=NULL){
            y = p2->val;
        }else{
            y = 0;
        }
        
        int sum = x + y + carry;
        carry = sum/10;
        curr->next = new ListNode(sum % 10);
        curr = curr->next;
        
        if(p1 != NULL){
            p1 = p1->next;
        }
        if(p2 != NULL){
            p2 = p2->next;
        }
        
    }
    
    if(carry > 0){
        curr->next = new ListNode(carry);
        
    }
    
    return ans->next;
    
}
