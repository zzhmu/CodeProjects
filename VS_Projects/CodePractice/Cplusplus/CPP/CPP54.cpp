//#include <iostream>
//#include <string>
//#include <sstream>
//using namespace std;
//
//int main() {
//    string input;
//    getline(cin, input);  // 获取一行输入
//
//    // 使用字符串流分割输入
//    istringstream iss(input);
//    string operation;
//    int num1, num2;
//    iss >> operation >> num1 >> num2;
//
//    // 将操作符转换为小写形式
//    for (char& c : operation) {
//        c = tolower(c);
//    }
//
//    int result;
//    if (operation == "add") {
//        result = num1 + num2;
//    }
//    else if (operation == "sub") {
//        result = num1 - num2;
//    }
//    else if (operation == "mul") {
//        result = num1 * num2;
//    }
//    else if (operation == "div") {
//        if (num2 != 0) {
//            result = num1 / num2;
//        }
//        else {
//            cout << "Error" << endl;
//            return 0;
//        }
//    }
//    else {
//        cout << "Invalid operation" << endl;
//        return 0;
//    }
//
//    // 输出结果
//    cout << result << endl;
//
//    return 0;
//}
