//#include <iostream>
//using namespace std;
//
//class Person {
//    friend void showAge(Person& p); // ���� showAge() Ϊ��Ԫ����
//
//public:
//    Person(int age) {
//        this->age = age;
//    }
//
//
//private:
//    int age;
//};
//
//void showAge(Person& p) {
//    cout << p.age << endl;
//}
//
//int main() {
//
//    Person p(10);
//    showAge(p);
//
//    return 0;
//}