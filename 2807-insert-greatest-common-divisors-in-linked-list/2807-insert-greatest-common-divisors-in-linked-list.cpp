class Solution {
public:
    int gcd(int a, int b) {
        int max = 1;
        for(int i = 1; i <= min(a, b); i++) {
            if(a % i == 0 && b % i == 0) {
                max = i;
            }
        }
        return max;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode *temp, *newNode, *prevNode;
        temp = head;

        while(temp->next != NULL) {
            prevNode = temp;
            temp = temp->next;
            
            newNode = new ListNode(gcd(prevNode->val, temp->val));
            newNode->next = temp;
            prevNode->next = newNode;
        }
        return head;
    }
};