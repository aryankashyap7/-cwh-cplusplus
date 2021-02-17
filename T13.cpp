// #ERROR CHANGE FILE NAME BEFORE RUNNING

#include<iostream>
using namespace std;

int main()
{   int marks[10],i=0,j=0, counter=0,num;
    int* p=marks;
    char choice,a;
    // while(true)
    // {
    //     cout<<"Enter Number:";
    //     cin>>choice;
        
    //     if(choice == 'Y'|| choice =='y'){
    //     return true;}
    //     else if(choice =='N'||choice =='n'){
    //     return false;}
        
    //     marks[counter]=int(choice);
        
    //     counter++;
        
    // }

    while(i<10)
    {cout<<"Enter Number:";
    cin>>num;
    marks[i]=num;
    i++;
        counter++;
    
        cout<<"Press (Y/N)";
        cin>>a;
        if(a=='y'|| a=='Y')
        break;
        else {continue;}
        
    
    

    }

    while(j<counter)
    {
        cout<<"\nThe marks stored in matrix["<<j<<"] : "<<marks[j]<<endl;
        cout<<"The marks stored in pointer *(p+"<<j<<") : "<<*(p+j)<<endl;
        cout<<"The address of pointer *(p+"<<j<<") : "<<(p+j)<<endl;
        j++;
    }

    
return 0;
}





// CWH CODE
// #include<iostream>
// using namespace std;

// int main(){
//     // Array Example
//     int marks[] = {23, 45, 56, 89};

//     int mathMarks[4];
//     mathMarks[0] = 2278;
//     mathMarks[1] = 738;
//     mathMarks[2] = 378;
//     mathMarks[3] = 578;

//     cout<<"These are math marks"<<endl;
//     cout<<mathMarks[0]<<endl;
//     cout<<mathMarks[1]<<endl;
//     cout<<mathMarks[2]<<endl;
//     cout<<mathMarks[3]<<endl;

//     // You can change the value of an array
//     marks[2] = 455;
//     cout<<"These are marks"<<endl;
//     // cout<<marks[0]<<endl;
//     // cout<<marks[1]<<endl;
//     // cout<<marks[2]<<endl;
//     // cout<<marks[3]<<endl;

//     for (int i = 0; i < 4; i++)
//     {
//         cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
//     }

//     // Quick quiz: do the same using while and do-while loops?

//     // Pointers and arrays
//     int* p = marks;
//     cout<<*(p++)<<endl;
//     cout<<*(++p)<<endl;
//     // cout<<"The value of *p is "<<*p<<endl;
//     // cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
//     // cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
//     // cout<<"The value of *(p+3) is "<<*(p+3)<<endl; 
    
//     return 0;
// }
