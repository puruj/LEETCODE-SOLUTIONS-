#include <iostream>
using namespace std;

/*
Time Complexity: O(m + n), where m and n are the lengths of the input lists. This is because the while loop iterates through each element in both lists once.
Space Complexity: O(1), as we only create a new ListNode pointer and two pointers to the input lists. We don't create any new data structures that depend on the size of the input.*/

 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp = new ListNode();
        ListNode* result = temp;

        while(list1 != NULL && list2 != NULL){
            if(list1->val < list2->val){
                temp->next = list1;
                list1 = list1->next;
            }
            else{
                temp->next = list2;
                list2 = list2->next;
            }
            temp = temp->next;
        }

        if(list1 != NULL){
            temp->next = list1;
        }
        else{
            temp->next = list2;
        }
        return result->next;
    }
};
