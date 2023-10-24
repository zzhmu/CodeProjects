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
//    // 构造函数
//    Employee(const string& n, double s)
//        : name(n), salary(s)
//    {}
//
//    string getName() const {
//        return name;
//    }
//    // 获取月工资
//    double getSalary() const {
//        return salary;
//    }
//
//    // 计算个人所得税
//    double calculateIncomeTax() const {
//        double tax = 0.0;
//        double income = salary - 3500.0;  // 全月应纳税所得额
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
//    // 创建三个 Employee 对象，姓名和工资分别是张三(6500)，李四(8000)，王五(100000)
//    Employee employee1("张三", 6500);
//    Employee employee2("李四", 8000);
//    Employee employee3("王五", 100000);
//
//    // 将员工对象添加到容器中
//    employees.push_back(employee1);
//    employees.push_back(employee2);
//    employees.push_back(employee3);
//
//    // 按照月工资由高到低进行排序
//    sort(employees.begin(), employees.end(),
//        [](const Employee& e1, const Employee& e2) {
//            return e1.getSalary() > e2.getSalary();
//        });
//
//    // 遍历容器并计算个人所得税
//    for (const auto& employee : employees) {
//        string name = employee.getName();
//        double tax = employee.calculateIncomeTax();
//
//        cout << name << "应该缴纳的个人所得税是：" << tax << endl;
//    }
//
//    return 0;
//}
