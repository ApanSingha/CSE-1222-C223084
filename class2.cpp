#include<iostream>
using namespace std;
class student
{
public :
    int roll_number,phone_number;
    string address;
};
int main()
{
    student Shofi,Jamshed;
    Shofi.address="Jamalkhan";
    Shofi.roll_number=01;
    Shofi.phone_number=353;
    Jamshed.address="Chawkbazar";
    Jamshed.roll_number=02;
    Jamshed.phone_number=453;
    cout<<Shofi.address<<endl;
    cout<<Shofi.roll_number<<endl;
    cout<<Shofi.phone_number<<endl;
    cout<<Jamshed.address<<endl;
    cout<<Jamshed.roll_number<<endl;
    cout<<Jamshed.phone_number<<endl;
    return 0;
}
