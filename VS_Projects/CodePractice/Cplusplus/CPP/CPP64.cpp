//#include <iostream>
//using namespace std;
//
//class Time {
//
//public:
//    int hours;      // Ð¡Ê±
//    int minutes;    // ·ÖÖÓ
//
//    Time() {
//        hours = 0;
//        minutes = 0;
//    }
//
//    Time(int h, int m) {
//        this->hours = h;
//        this->minutes = m;
//    }
//    bool operator<(const Time& other) {
//        
//        if (hours * 60 + minutes < other.hours * 60 + other.minutes)
//            return true;
//        else
//            return false;
//        
//    }
//    void show() {
//        cout << hours << " " << minutes << endl;
//    }
//
//    // write your code here......
//
//
//};
//
//int main() {
//    int h, m;
//    cin >> h;
//    cin >> m;
//
//    Time t1(h, m);
//    Time t2(6, 6);
//
//    if (t1 < t2) cout << "yes"; else cout << "no";
//    return 0;
//}