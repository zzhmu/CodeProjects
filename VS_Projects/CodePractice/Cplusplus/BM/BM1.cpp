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
//            next = curr->next;// 保存当前节点的下一个节点
//            curr->next = prev;// 反转当前节点的指针指向前一个节点
//            prev = curr;        // 更新 prev 指向当前节点
//            curr = next;        // 更新 curr 指向下一个节点
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
//    // 输出反转后的链表
//    listnode* p = reversedhead;
//    while (p != nullptr) {
//        cout << p->val << " ";
//        p = p->next;
//    }
//
//    // 释放链表内存
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
