//#include <iostream>
//#include <cstring>
//#include <map>
//using namespace std;
//
//int main() {
//
//    int letter = 0;
//    int digit = 0;
//    int space = 0;
//    int other = 0;
//    
//    //map<string, int>string_map;
//    //string_map["letter"] = 0;
//    //string_map["digit"] = 0;
//    //string_map["space"] = 0;
//    //string_map["other"] = 0;
//    //map<string, int>::iterator it;
//    char buf[1024] = { 0 };
//    cin.getline(buf, sizeof(buf));//会把没有占用的char设为\0
//    cout << buf << endl;
//    char * ptr = buf;
//    for (int i = 0;i<strlen(buf); i++) {
//        if (isalpha(buf[i]))
//            letter++;
//        if (isdigit(buf[i]))
//            digit++;
//        if (isspace(buf[i]))
//            space++;
//        else
//            other++;
//    }
//
//    // write your code here......
//
//
//    cout << "letter:" << letter << " digit:" << digit << " space:" << space << " other:" << other << endl;
//
//    return 0;
//}