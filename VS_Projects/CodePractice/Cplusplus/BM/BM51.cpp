//#include<vector>
//#include <unordered_map>
//#include<iostream>
//using namespace std;
//class Solution {
//public:
//    /**
//     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
//     *
//     *
//     * @param numbers int����vector
//     * @return int����
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