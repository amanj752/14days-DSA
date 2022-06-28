



            class Solution {
            public:
                ListNode* middleNode(ListNode* head) {
                    ListNode *a,*c;
                    a=c=head;
                    while(c && c->next){
                        a=a->next;
                        c=c->next->next; 
                    }
                    return a;
                }
            };