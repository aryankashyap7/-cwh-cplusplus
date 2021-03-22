#include <iostream>
using namespace std;
class c2;
class c1
{
    int a;
    friend void swapnumber(c1, c2);

public:
    void getdata()
    {
        cout << "ENTER NUMBER:";
        cin >> a;
    }

    void showdata()
    {
        cout << "ENTERed NUMBER: " << a << endl;
    }
};

class c2
{
    int b;
    friend void swapnumber(c1, c2);

public:
    void getdata()
    {
        cout << "\nENTER NUMBER:";
        cin >> b;
    }

    void showdata()
    {
        cout << "ENTERed NUMBER: " << b << endl;
    }
};

void swapnumber(c1 x, c2 y)
{
    int temp = x.a;
    x.a = y.b;
    y.b = temp;
}
int main()
{
    c1 a;
    c2 k;

    a.getdata();
    a.showdata();
    k.getdata();
    k.showdata();

    cout << "\nAFTER SWAPPING::::::::::::::::" << endl;
    swapnumber(a, k);
    a.showdata();
    k.showdata();

    return 0;
}