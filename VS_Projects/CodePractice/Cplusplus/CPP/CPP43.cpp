//#include <iostream>
//using namespace std;
//
//class Time {
//
//public:
//    int hours;      // Ğ¡Ê±
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
//    Time operator+(const Time& other)  const{
//        //Time result;
//        //result.hours = hours + other.hours;
//        //result.minutes = minutes + other.minutes;
//
//        //if (result.minutes >= 60) {
//        //    result.hours += result.minutes / 60;
//        //    result.minutes %= 60;
//        //}
//        //return result;
//        return Time(hours + other.hours,minutes+other.minutes);
//    }
//    void show() {
//        cout << hours << " " << minutes << endl;
//    }
//
//
//
//};
//
//int main() {
//
//    int h, m;
//    cin >> h;
//    cin >> m;
//
//    Time t1(h, m);
//    Time t2(2, 20);
//
//    Time t3 = t1 + t2;
//    t3.show();
//
//    return 0;
//}