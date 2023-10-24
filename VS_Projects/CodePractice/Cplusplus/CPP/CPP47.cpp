//#include <iostream>
//#include <vector>
//// write your code here......
//
//using namespace std;
//
//int main() {
//    int input;
//    vector<int> arr;
//    for (int i = 1; i <= 5; i++)
//    {
//        cin >> input;
//        arr.push_back(input);
//    }
//    
//    vector<int>::iterator i;
//    for (i = arr.begin(); i != arr.end(); i++)//迭代器初始化指向容器v的首个元素，这里的“!=”不能用“<”代替
//    {
//        cout << *i << " ";
//    }
//    cout << endl;
//    vector<int>::reverse_iterator j;
//    for (j = arr.rbegin(); j != arr.rend(); j++)//迭代器初始化指向容器v的首个元素，这里的“!=”不能用“<”代替
//    {
//        cout << *j << " ";
//    }
//
//    cout << endl;
//    return 0;
//}