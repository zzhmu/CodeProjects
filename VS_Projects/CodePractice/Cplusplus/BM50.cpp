//#include <vector>
//#include <unordered_map>
//#include<iostream>
//using namespace std;
//class Solution {
//public:
//    vector<int> twoSum(vector<int>& numbers, int target) {
//        unordered_map<int, int> map;
//        // ��������
//        for (int i = 0; i < numbers.size(); i++) {
//            // �������� target - numbers[i] ��Ԫ��װ�� map ��
//            // ���������ֱ�ӷ��ض�Ӧ���±�
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
