//#include<iostream>
//using namespace std;
//class Array {
//private:
//	int n;//�����С 
//	int* a;//���� 
//public:
//	Array() {
//		cin >> n;
//		a = new int[n];
//		for (int i = 0; i < n; i++) cin >> a[i];
//	}
//	~Array() {
//		delete[]a;
//	}
//	int getlen() {
//		return n;
//	}
//	int get(int i) {
//		return a[i];
//	}
//	Array(const Array &other) {
//		this->n = other.n;
//		this->a = new int[this->n];
//		for (int i = 0; i < n; i++) {
//			this->a[i] = other.a[i];
//		}
//	}
//
//	void show() {
//		for (int i = 0; i < n; i++) cout << a[i] << ' ';
//	}
//};
//int main() {
//	Array a;
//	Array b = a;
//	b.show();
//	return 0;
//}
//
