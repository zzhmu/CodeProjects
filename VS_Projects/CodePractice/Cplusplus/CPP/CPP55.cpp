//#include <iostream>
//#include <string>
//using namespace std;
//
//string toHexString(int n);
//
//int main() {
//
//    int n;
//    while (true)
//    {
//        cin >> n;
//
//        string hexStr = toHexString(n);
//        cout << hexStr << endl;
//    }
//
//
//    return 0;
//}
//
//string toHexString(int n) {
//    // write your code here......
//    char onesix[6] = { 'A','B','C','D','E','F' };
//    
//    char fc=0;
//    char sc=0;
//    char tc=0;
//    char result[5] = {0};
//    int rest0 = n % 16;
//    int rest1 = n%(16*16)/ 16;
//    int rest2 = n / 16 / 16;
//    //cout << rest2 << " " << rest1 << " " << rest0 << endl;
//    if (rest2 > 9)
//    {
//        tc = onesix[rest2 - 9 - 1];
//    }
//    else
//    {
//        tc = rest2+'0';
//    }
//    if (rest1 > 9)
//    {
//        sc = onesix[rest1 - 9 - 1];
//    }
//    else
//    {
//        sc = rest1+'0';
//    }
//    if (rest0 > 9)
//    {
//        fc = onesix[rest0 - 9 - 1];
//    }
//    else
//    {
//        fc = rest0+'0';
//    }
//    //cout << tc << " " << sc << " " << fc << endl;
//    result[0] = tc;
//    result[1] = sc;
//    result[2] = fc;
//
//    //cout <<"½á¹û" << result;
//    return result;
//
//}