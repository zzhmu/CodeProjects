//#include <iostream>
//#include <string>
//#include <sstream>
//using namespace std;
//
//int main() {
//    string input;
//    getline(cin, input);  // ��ȡһ������
//
//    // ʹ���ַ������ָ�����
//    istringstream iss(input);
//    string operation;
//    int num1, num2;
//    iss >> operation >> num1 >> num2;
//
//    // ��������ת��ΪСд��ʽ
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
//    // ������
//    cout << result << endl;
//
//    return 0;
//}
