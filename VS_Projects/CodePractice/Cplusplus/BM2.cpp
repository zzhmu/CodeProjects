#include<iostream>
using namespace std;

struct listnode {
    int val;
    struct listnode* next;
    listnode(int x) : val(x), next(nullptr) {}
};
 
class solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param head listnode类
     * @param m int整型
     * @param n int整型
     * @return listnode类
     */
    listnode* reversebetween(listnode* head, int m, int n) {
        // write code here
        listnode* prev = nullptr;  // 反转后的链表头结点
        listnode* curr = head;     // 当前节点，初始为头结点
        for (int i = 1; i < n; i++) {
            curr = head->next;
        }
        listnode* next = nullptr;  // 当前节点的下一个节点

        while (m<=n) {
            next = curr->next;    // 保存当前节点的下一个节点
            curr->next = prev;    // 反转当前节点的指针指向前一个节点
            prev = curr;          // 更新 prev 指向当前节点
            curr = next;          // 更新 curr 指向下一个节点
            m++;
        }

        return prev;  // 返回反转后的链表头结点
    }
};
int main() {
    int m, n, size;
    cout << "input m and n and size:";
    cin >> m >> n >> size;
    
    listnode* head = nullptr;
    listnode* tail = nullptr;
    for (int i = 1; i <= size; i++) {
        listnode* node = new listnode(i);
        if (head == nullptr) {
            head = node;
            tail = node;
        }
        else {
            tail->next = node;
            tail = node;

        }
    }
    int* a = new int[size];
    cout << "input value:";
    int* a = new int[size];
    for (int i = 1; i <= size; i++)
    {
        cin >> a[i - 1];
    }
    int value;
    listnode* current = head;
    for (int i = 1; i <= size; i++) {
        value = a[i - 1];
        current->val = value;
        current = current->next;
    }
    delete[] a;

    solution s;
    listnode* reversedhead = s.reversebetween(head,m,n);

    // 输出反转后的链表
    cout << "reverse output:";
    listnode* p = reversedhead;
    while (p != nullptr) {
        cout << p->val << " ";
        p = p->next;
    }

    // 释放链表内存
    p = reversedhead;
    while (p != nullptr) {
        listnode* q = p;
        p = p->next;
        delete q;
    }


    return 0;
}