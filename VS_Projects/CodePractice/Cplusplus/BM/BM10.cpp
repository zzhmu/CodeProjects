//#include<iostream>
//using namespace std;
//struct ListNode {
//	int val;
//	struct ListNode *next;
//	ListNode(int x) :
//			val(x), next(NULL) {
//	}
//};
//class Solution {
//public:
//	ListNode* FindFirstCommonNode(ListNode* pHead1, ListNode* pHead2) {
//		ListNode* cur1 = pHead1;
//		ListNode* cur2 = pHead2;
//		while (cur1!=cur2)
//		{
//			
//			cur1 = (cur1 == nullptr) ? cur2 : cur1->next;
//			cur2 = (cur2 == nullptr) ? cur1 : cur2->next;
//		}
//		return cur1;
//	}
//};
//
//int main() {
//	//Solution s;
//	//ListNode* p1 =new ListNode(1);
//	//p1->next->val = 2;
//	//p1->next->next->val = 3;
//	//p1->next->next->next->val = 6;
//	//p1->next->next->next->next->val = 7;
//	//ListNode* p2 =new ListNode(4);
//	//p2->next->val = 5;
//	//p2->next->next->val = 6;
//	//p2->next->next->next->val = 7;
//	//cout << s.FindFirstCommonNode(p1, p2)->val;
//
//}
