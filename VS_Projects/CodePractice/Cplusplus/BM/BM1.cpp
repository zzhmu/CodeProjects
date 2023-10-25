//#include <iostream>
//using namespace std;
//
//struct listnode {
//    int val;
//    struct listnode* next;
//    listnode(int x) : val(x), next(nullptr) {}
//};
//
//class solution {
//public:
//    listnode* reverselist(listnode* head) {
//        listnode* prev = nullptr;
//        listnode* curr = head;
//        listnode* next = nullptr;
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
//    
//    int size;
//    cout << "input size:";
//    cin >> size;
//    int value;
//    listnode* head = nullptr;
//    listnode* tail = nullptr;
//    for (int i = 1; i <= size; i++) {
//        listnode* node = new listnode(i);
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
//    
//    cout << "input value:";
//    int* a = new int[size];
//    for (int i = 1; i <= size; i++)
//    {
//        cin >> a[i-1];
//    }
//    listnode* current=head;
//    for (int i = 1; i <= size; i++) {
//        value = a[i - 1];
//        current->val = value;
//        current = current->next;
//    }
//    delete[] a;
//    solution s;
//    listnode* reversedhead = s.reverselist(head);
//
//    // �����ת�������
//    listnode* p = reversedhead;
//    while (p != nullptr) {
//        cout << p->val << " ";
//        p = p->next;
//    }
//
//    // �ͷ������ڴ�
//    p = reversedhead;
//    while (p != nullptr) {
//        listnode* q = p;
//        p = p->next;
//        delete q;
//    }
//
//    return 0;
//}
//
