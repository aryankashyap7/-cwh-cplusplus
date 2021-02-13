#include <iostream>
using namespace std;

class Professor {
private:
double salary;
public:
int ID;
string name,batch;
Professor(int ID, string name,double salary, string batch){
this->ID = ID;
this->name = name;
this->salary = salary;
this->batch = batch;
}
void raiseSalary(){
salary = salary + (salary * 0.05);
cout<<"The Professor's new salary:"<<salary<<"\n";
}
void display(){
cout<<"Professor ID is:"<<ID<<"\n";
cout<<"Professor Batch:"<<batch<<"\n";
cout<<"Professor name:"<<name<<"\n";
cout<<"Professor salary:"<<salary<<"\n";
}
};

int main(void){
Professor e1 = Professor(1,"Aryan Kashyap",300000,"C11");
e1.display();
e1.raiseSalary();
cout<<endl;
Professor e2 = Professor(2,"Khushi Gupta",350000,"A12");
e2.display();
e1.raiseSalary();
return 0;
}
