//#include <vector>
//#include <unordered_map>
//#include<iostream>
//using namespace std;
//class Solution {
//public:
//    vector<int> twoSum(vector<int>& numbers, int target) {
//        unordered_map<int, int> map;
//        // 遍历数组
//        for (int i = 0; i < numbers.size(); i++) {
//            // 将不包含 target - numbers[i] 的元素装入 map 中
//            // 如果包含，直接返回对应的下标
//            if (map.count(target - numbers[i])) {
//                return { map[target - numbers[i]] + 1, i + 1 };
//            }
//            else {
//                map[numbers[i]] = i;
//            }
//        }
//        
//    }
//};
