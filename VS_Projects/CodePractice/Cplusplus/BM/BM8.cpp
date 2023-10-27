//#include<iostream>
//#include<stack>
//using namespace std;
//struct ListNode {
//    int val;
//    struct ListNode* next;
//    ListNode(int x) : val(x), next(nullptr) {}
//};
//
///**
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     ListNode *next;
// *     ListNode(int x) : val(x), next(NULL) {}
// * };
// */
//class Solution {
//public:
//    ListNode* FindKthToTail(ListNode* pHead, int k) {
//        if (pHead == nullptr || k == 0) {
//            return nullptr;
//        }
//        stack<ListNode*> s;
//        //链表节点压栈
//        while (pHead != nullptr) {
//            s.push(pHead);
//            pHead = pHead->next;
//        }
//        // 判断栈的元素是否小于k
//        if (s.size() < k) {
//            return nullptr;
//        }
//        //在出栈串成新的链表
//        //ListNode* firstNode = s.top();
//        //s.pop();
//        while (--k > 0) {
//            s.pop();
//            // 将出栈的元素重新连接成为链表
//            //ListNode* temp = s.top();
//            //temp->next = firstNode;
//            //firstNode = temp;
//        }
//        return s.top();
//    }
//};
//
//int main() {
//
//
//    return 0;
//}