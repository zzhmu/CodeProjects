//#include<iostream>
//#include<string>
//#include<stack>
//#include <sstream>
//using namespace std;
//class Solution {
//public:
//    /**
//     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
//     *
//     *
//     * @param s string�ַ���
//     * @param n int����
//     * @return string�ַ���
//     */
//    string trans(string s, int n) {
//        string str = "";
//        int start = 0;
//        for (int i = n - 1; i >= 0; i--) {
//            if (s[i] == ' ') {
//                str += " ";
//                start = n - i;
//            }
//            else {
//                char sss = (char)(s[i] < 97 ? s[i] + 32 : s[i] - 32);
//                str.insert(start, 1, sss);
//            }
//        }
//        return str;
//    }
//};
//int main() {
//    Solution s;
//    string st = "Hello World";
//    cout << s.trans(st, st.length());
//
//    return 0;
//
//}