//#include<iostream>
//#include<vector>
//using namespace std;
//struct ListNode {
//    int val;
//    struct ListNode* next;
//    ListNode(int x) : val(x), next(nullptr) {}
//};
// 
//class Solution {
//public:
//    ListNode* reverseKGroup(ListNode* head, int k) {
//        if (k == 1) return head;//Ҫ��k=1 ֱ��ԭ���鲻�����ı�
//        ListNode* cur = head;//����һ����ָ��ȥ����
//        vector<int> v;
//        int count = 0, index = 0;
//        while (cur) {
//            v.push_back(cur->val);
//            count++;
//            index++;
//            if (count == k) {
//                //����������k��ʾ������Ҫ��ת ����reverse������ת
//                reverse(v.begin() + index - k, v.begin() + index);
//                //����������
//                count = 0;
//            }
//            //ָ�����
//            cur = cur->next;
//        }
//        cur = head;
//        //��󷵻���ָ�� ��ָ��ֵ���д��¸�ֵ
//        for (int i = 0; i < v.size(); i++) {
//            cur->val = v[i];
//            cur = cur->next;
//        }
//        return head;
//    }
//    ListNode* reverselist(ListNode* head) {
//        ListNode* prev = nullptr;
//        ListNode* curr = head;
//        ListNode* next = nullptr;
//
//        while (curr != nullptr) {
//            next = curr->next;// ���浱ǰ�ڵ����һ���ڵ�
//            curr->next = prev;// ��ת��ǰ�ڵ��ָ��ָ��ǰһ���ڵ�
//            prev = curr;        // ���� prev ָ��ǰ�ڵ�
//            curr = next;        // ���� curr ָ����һ���ڵ�
//        }
//
//        return prev;
//    }
//};
//int main() {
//    int k;
//    cout << "input k:";
//    cin >> k;
//
// 
//    //cout << "input value:";
//    //int n = 0; // Ԫ�ظ���
//    //int capacity = 1; // ��ʼ����
//    //int* arr = new int[capacity]; // ��̬����
//    //int x;
//    //while (cin >> x) {
//    //    if (n == capacity) { // ������������Ҫ����
//    //        capacity ++;
//    //        int* new_arr = new int[capacity];
//    //        for (int i = 0; i < n; ++i) {
//    //            new_arr[i] = arr[i];
//    //        }
//    //        delete[] arr;
//    //        int* arr = new int[capacity];
//    //        arr = new_arr;
//    //    }
//    //    arr[n++] = x; // �������Ԫ�ش���������
//    //}
//    //cout << "arr:" << *arr << endl;
//    //int size= sizeof(*arr) / sizeof(arr[0]);
//    //ListNode* head = nullptr;
//    //ListNode* tail = nullptr;
//    //for (int i = 1; i <= size; i++) {
//    //    ListNode* node = new ListNode(i);
//    //    if (head == nullptr) {
//    //        head = node;
//    //        tail = node;
//    //    }
//    //    else {
//    //        tail->next = node;
//    //        tail = node;
//    //    }
//    //}
//    int size = 7;
//    int a[] = { 1,2,3,4,5,6,7 };
//    int value;
//    ListNode* head = new ListNode(0);
//    ListNode* current = head;
//    for (int i = 1; i <= size; i++) {
//        value = a[i - 1];
//        current->val = value;
//        if (i != size) {
//            current->next = new ListNode(0);
//        }
//        current = current->next;
//    }
//    current = head;
//    while (current != nullptr) {
//        cout << current->val << " ";
//        current = current->next;
//    }
//
////    int value;
////    listnode* current = head;
////    for (int i = 1; i <= size; i++) {
////        value = a[i - 1];
////        current->val = value;
////        current = current->next;
////    }
//    cout << endl;
//    Solution s;
//    ListNode* reversedhead = s.reverseKGroup(head,k);
//
//    // �����ת�������
//    cout << "reverseKGroup output:" << endl;
//    ListNode* p = reversedhead;
//    while (p != nullptr) {
//        cout << p->val << " ";
//        p = p->next;
//    }
//    cout << "output over:" << endl;
//    // �ͷ������ڴ�
//    p = reversedhead;
//    while (p != nullptr) {
//        ListNode* q = p;
//        p = p->next;
//        delete q;
//    }
//
//
//    return 0;
//}