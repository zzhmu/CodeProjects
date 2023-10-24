//#include <iostream>
//using namespace std;
//
//class Base {
//
//private:
//    int x;
//    int y;
//
//public:
//
//    Base(int x, int y) {
//        this->x = x;
//        this->y = y;
//    }
//
//    int getX() {
//        
//        return x;
//    }
//
//    int getY() {
//        return y;
//    }
//
//    void calculate() {
//        cout << getX() * getY() << endl;
//    }
//
//};
//
//class Sub : public Base {
//
//public:
//    
//    Sub(int x, int y) : Base(x, y) {}
//    void calculate() {
//        if (getY() == 0)
//            cout << "Error";
//        else
//            cout << getX() / getY() << endl;
//    }
//
//};
//
//int main() {
//
//    int x, y, z;
//    cin >> x;
//    cin >> y;
//    Sub sub(x, y);
//    sub.calculate();
//
//    return 0;
//}