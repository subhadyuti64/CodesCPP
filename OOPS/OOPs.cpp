#include<iostream>
#include<string>
using namespace std;

class Teacher
{
    public:
    string name;
    string subject;
    string department;
    double salary;

    void changeDept(string newDept)
    {
        department = newDept;
    }
};     

int main()
{
    Teacher t1;
    t1.name = "Subha";
    t1.subject = "Maths";
    t1.department = "Science";
    t1.salary = 50000;

    cout << "Name: " << t1.name << endl;
    cout << "Subject: " << t1.subject << endl;
    cout << "Department: " << t1.department << endl;
    cout << "Salary: " << t1.salary << endl;

    t1.changeDept("Maths");
    cout << "New Department: " << t1.department << endl;

    return 0;
}