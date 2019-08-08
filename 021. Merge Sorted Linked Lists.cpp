//https://leetcode.com/problems/merge-two-sorted-lists/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        if(l1==NULL && l2==NULL)
            return l1;
        else if(l1!=NULL && l2==NULL)
            return l1;
        else if(l2!=NULL && l1==NULL)
            return l2;
        

      
        ListNode *n1,*n11,*n2,*bigHead,*temp;
        ListNode *headMain=(l1->val<l2->val)?l1:l2;
       
        bigHead=(headMain==l1)?l2:l1;
        
        if(headMain->next==NULL)                //Only one node in headMain
        {
            headMain->next=bigHead;
            return headMain;
        }
            
       
        n1=n11=headMain;
        n2=bigHead;
    
        if(n1->val==n2->val)
        {
            n1=n1->next;            //avoid looping on first node
        }
        
        
       
        while(n1!=NULL && n2!=NULL)
        {
            
            if(n1->val<n2->val)
            {
                n11=n1;
                n1=n1->next;
            }
            else
            {
                n11->next=n2;
                temp=n2->next;
                n2->next=n1;                //Part time job - When bigHead finishes first
                n11=n2;
                n2=temp;
                
            }
            
        }
        
        if(n11->next==NULL && n2!=NULL)     //When headMain finishes first
            n11->next=n2;
            
        return headMain;
        
    }
};
