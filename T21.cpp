#include <iostream>
using namespace std;

class Employee
{
private:
    int marks, age;

public:
    string name;
    int class1;
    void getdata(int marks, int age);
    void showdata()
    {
        cout << "Name: " << name << endl;
        cout << "Class: " << class1 << endl;
        cout << "Marks: " << marks << endl;
        cout << "Age: " << age << endl;
    }
};

void Employee ::getdata(int marks1, int age1)
{
    marks = marks1;
    age = age1;
}

int main()
{
    Employee e1;

    cout << "Name: ";
    cin >> e1.name;
    cout << "Class: ";
    cin >> e1.class1;

    e1.getdata(92, 11);

    e1.showdata();

    return 0;
}