//#include <iostream>
//#include <map>
//
//using namespace std;
//
//int main() {
//    char str[100] = { 0 };
//    cin.getline(str, sizeof(str));
//
//    map<char, int> charCount;
//    for (int i = 0; str[i] != '\0'; i++) {
//        if (isalpha(str[i])) {
//            charCount[str[i]]++;
//        }
//    }
//
//    // 遍历map输出字符及出现次数
//    for (auto it = charCount.begin(); it != charCount.end(); it++) {
//        cout << it->first << ":" << it->second << endl;
//    }
//
//    return 0;
//}
