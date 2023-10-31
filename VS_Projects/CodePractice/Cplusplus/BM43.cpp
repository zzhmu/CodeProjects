//#include<stack>
//using namespace std;
//class Solution {
//public:
//    void push(int value) {
//        stack1.push(value);
//        if (!stack1.empty() && value < stack1.top()) {
//            minnumber = value;
//        }
//        else {
//            minnumber = stack1.top();
//        }
//    }
//    void pop() {
//        stack1.pop();
//        if (!stack1.empty() && minnumber > stack1.top()) {
//            minnumber = stack1.top();
//        }
//    }
//    int top() {
//        stack1.top();
//    }
//    int min() {
//        return minnumber;
//    }
//private:
//    int minnumber;
//    stack<int> stack1;
//};