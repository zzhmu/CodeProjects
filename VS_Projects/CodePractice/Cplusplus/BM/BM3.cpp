//#include<iostream>
//using namespace std;
//struct ListNode {
//    int val;
//    struct ListNode* next;
//    ListNode(int x) : val(x), next(nullptr) {}
//};
// 
//class Solution {
//public:
//    /**
//     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
//     *
//     *
//     * @param head ListNode��
//     * @param k int����
//     * @return ListNode��
//     */
//    ListNode* reverseKGroup(ListNode* head, int k) {
//        // write code here
//    }
//};
//int main() {
//    int k, size;
//    cout << "input k:";
//    cin >> k;
//
//    ListNode* head = nullptr;
//    ListNode* tail = nullptr;
// 
//    cout << "input value:";
//    int* a = new int;
//    int n = 0; // Ԫ�ظ���
//    int capacity = 10; // ��ʼ����
//    int* arr = new int[capacity]; // ��̬����
//
//    int x;
//    while (cin >> x) {
//        if (n == capacity) { // ������������Ҫ����
//            capacity *= 2;
//            int* new_arr = new int[capacity];
//            for (int i = 0; i < n; ++i) {
//                new_arr[i] = arr[i];
//            }
//            delete[] arr;
//            arr = new_arr;
//        }
//        arr[n++] = x; // �������Ԫ�ش���������
//    }
//    for (int i = 1; i <= size; i++)
//    {   
//        cin >> a[i - 1];
//    }
//    for (int i = 1; i <= size; i++) {
//        ListNode* node = new ListNode(i);
//        if (head == nullptr) {
//            head = node;
//            tail = node;
//        }
//        else {
//            tail->next = node;
//            tail = node;
//
//        }
//    }
//    int value;
//    ListNode* current = head;
//    for (int i = 1; i <= size; i++) {
//        value = a[i - 1];
//        current->val = value;
//        current = current->next;
//    }
//    delete[] a;
//
//    Solution s;
//    ListNode* reversedhead = s.reverseKGroup(head, k);
//
//    // �����ת�������
//    cout << "reverseKGroup output:";
//    ListNode* p = reversedhead;
//    while (p != nullptr) {
//        cout << p->val << " ";
//        p = p->next;
//    }
//
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