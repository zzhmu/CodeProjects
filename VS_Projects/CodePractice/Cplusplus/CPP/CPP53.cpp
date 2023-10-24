//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Employee {
//private:
//    string name;
//    double salary;
//
//public:
//    // ���캯��
//    Employee(const string& n, double s)
//        : name(n), salary(s)
//    {}
//
//    string getName() const {
//        return name;
//    }
//    // ��ȡ�¹���
//    double getSalary() const {
//        return salary;
//    }
//
//    // �����������˰
//    double calculateIncomeTax() const {
//        double tax = 0.0;
//        double income = salary - 3500.0;  // ȫ��Ӧ��˰���ö�
//
//        if (income <= 0) {
//            tax = 0.0;
//        }
//        else if (income <= 1500) {
//            tax = income * 0.03;
//        }
//        else if (income <= 4500) {
//            tax = income * 0.10 - 105;
//        }
//        else if (income <= 9000) {
//            tax = income * 0.20 - 555;
//        }
//        else if (income <= 35000) {
//            tax = income * 0.25 - 1005;
//        }
//        else if (income <= 55000) {
//            tax = income * 0.30 - 2755;
//        }
//        else if (income <= 80000) {
//            tax = income * 0.35 - 5505;
//        }
//        else {
//            tax = income * 0.45 - 13505;
//        }
//
//        return tax;
//    }
//};
//int main() {
//    vector<Employee> employees;
//
//    // �������� Employee ���������͹��ʷֱ�������(6500)������(8000)������(100000)
//    Employee employee1("����", 6500);
//    Employee employee2("����", 8000);
//    Employee employee3("����", 100000);
//
//    // ��Ա��������ӵ�������
//    employees.push_back(employee1);
//    employees.push_back(employee2);
//    employees.push_back(employee3);
//
//    // �����¹����ɸߵ��ͽ�������
//    sort(employees.begin(), employees.end(),
//        [](const Employee& e1, const Employee& e2) {
//            return e1.getSalary() > e2.getSalary();
//        });
//
//    // ���������������������˰
//    for (const auto& employee : employees) {
//        string name = employee.getName();
//        double tax = employee.calculateIncomeTax();
//
//        cout << name << "Ӧ�ý��ɵĸ�������˰�ǣ�" << tax << endl;
//    }
//
//    return 0;
//}
