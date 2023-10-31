//#include<vector>
//#include <unordered_map>
//#include<iostream>
//using namespace std;
//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     *
//     * @param numbers int整型vector
//     * @return int整型
//     */
//    
//    int MoreThanHalfNum_Solution(vector<int>& numbers) {
//        int most = 0;
//        unordered_map<int, int>map;
//        for (int i = 0; i <= numbers.size()-1; i++) {
//            if (map.count(numbers[i])) {
//                map[numbers[i]]++;
//                if (most < map[numbers[i]]) {
//                    most = numbers[i];
//                }
//            }
//            else {
//                map[numbers[i]] = 1;
//                if (most < map[numbers[i]]) {
//                    most = numbers[i];
//                }
//            }
//        }
//        return most;
//        // write code here
//    }
//};
//int main() {
//    vector<int> numbers = { 1,2,3,2,2,2,5,4,2,3,3,3,3,3,3 };
//    Solution s;
//    cout << s.MoreThanHalfNum_Solution(numbers);
//    return 0;
//}