#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

 ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* fnl = list1;
        ListNode* list;
        if(list1->val>list2->val){
            list = list1;
            list1 = list2;
            list2 = list;
        }
        while(list1->next && list2){
            if(list1->next->val<list2->val){
                list1 = list1->next;
            }
            else{
                list = list1->next;
                list1->next = list2;
                list1 = list1->next;
                list1->next = list;
                list2 = list2->next;
            }
        }
        return fnl;
    }

int main(){
    ListNode* list;
    list->val = 0;
    ListNode* l2;
    l2->val = 1;
    //mergeTwoLists(list, l2);
    cout<<list->next->val;

    return 1;
}
