#include<iostream>
using namespace std;
class student
{
public :
    string name;
    int roll_no;
};
int main()
{
    student a;
    a.name="Jamshed";
    a.roll_no=2;
    cout<<a.name<<endl;
    cout<<a.roll_no<<endl;
    return 0;
}
