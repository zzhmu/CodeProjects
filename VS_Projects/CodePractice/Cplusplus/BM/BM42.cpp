//#include<stack>
//#include<iostream>
//using namespace std;
//class Solution
//{
//public:
//    //void push(int node) {
//    //    while (!stack2.empty()) {
//    //        stack1.push(stack2.top());
//    //        stack2.pop();
//    //    }
//    //    stack1.push(node);
//    //}
//    void push(int node) {
//        int size = stack2.size();
//        for (int i = 1; i <= size; i++) {
//            stack1.push(stack2.top());
//            stack2.pop();
//            
//        }
//        stack1.push(node);
//    }
//    //int pop() {
//    //    while (!stack1.empty()) {
//    //        stack2.push(stack1.top());
//    //        stack1.pop();
//    //    }
//    //    out = stack2.top();
//    //    stack2.pop();
//    //    return out;
//    //}
//    int pop() {
//        int size = stack1.size();
//        for (int i = 1; i <= size; i++)
//        {
//            stack2.push(stack1.top());
//            stack1.pop();
//        }
//        out = stack2.top();
//        stack2.pop();
//        return out;
//    }
//
//private:
//    int out;
//    stack<int> stack1;
//    stack<int> stack2;
//};
//int main() {
//    Solution s;
//    s.push(1);
//    s.push(2);
//    s.push(3);
//    s.push(4);
//    cout << s.pop();
//    cout << s.pop();
//    cout << s.pop();
//    cout << s.pop();
//    return 0;
//}