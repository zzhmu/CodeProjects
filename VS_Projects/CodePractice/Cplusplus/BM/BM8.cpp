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
//        //����ڵ�ѹջ
//        while (pHead != nullptr) {
//            s.push(pHead);
//            pHead = pHead->next;
//        }
//        // �ж�ջ��Ԫ���Ƿ�С��k
//        if (s.size() < k) {
//            return nullptr;
//        }
//        //�ڳ�ջ�����µ�����
//        //ListNode* firstNode = s.top();
//        //s.pop();
//        while (--k > 0) {
//            s.pop();
//            // ����ջ��Ԫ���������ӳ�Ϊ����
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