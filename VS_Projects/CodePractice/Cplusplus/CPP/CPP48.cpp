//#include <iostream>
//#include <deque>
//using namespace std;
//
//class Guest {
//public:
//    string name;
//    bool vip;
//
//    Guest(string name, bool vip) {
//        this->name = name;
//        this->vip = vip;
//    }
//};
//
//int main() {
//
//    Guest guest1("张三", false);
//    Guest guest2("李四", false);
//    Guest vipGuest("王五", true);
//    deque<Guest> deque;
//    deque.push_back(guest1);
//    deque.push_back(guest2);
//    deque.push_front(vipGuest);
//    // write your code here......
//
//
//    for (Guest g : deque) {
//        cout << g.name << " ";
//    }
//
//    return 0;
//}