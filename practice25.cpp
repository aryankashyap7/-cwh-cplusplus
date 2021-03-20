#include <iostream>
using namespace std;

class employee
{
    int id;
    int salary;

public:
    void inputdata(void)
    {
        cout << "ENTER SALARY: ";
        cin >> salary;
        cout << "ENTER ID: ";
        cin >> id;
    };
    void displaydata(void)
    {
        cout << "SALARY: " << salary;
        cout << "\nID: " << id;
    }
};

int main()
{
    employee e[3];
    // e[1].inputdata();
    // e[1].displaydata();

    for (int i = 0; i < 3; i++)
    {
        e[i].inputdata();
        e[i].displaydata();
    }
    return 0;
}