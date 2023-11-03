//#include<iostream>
//using namespace std;
//class Solution {
//public:
//    int Fibonacci(int n) {
//        int i0 = 0;
//        int i1 = 1;
//
//        if (n > 1) {
//            int goal = 0;
//            for (int i = 0; i < n - 1; i++) {
//                goal = i0 + i1;
//                i0 = i1;
//                i1 = goal;
//            }
//
//            return goal;
//        }
//        else if (n == 0) {
//            return 0;
//        }
//        else {
//            return 1;
//        }
//    }
//};
//
//int main() {
//    Solution s;
//    cout << s.Fibonacci(10);
//    return 0;
//}