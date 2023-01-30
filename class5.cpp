#include<iostream>
using namespace std;
class Rectangle
{
public:
    int Length,Breadth;
    Rectangle(int i,int j)
    {
        Length=i;
        Breadth=j;
    }
    double Area()
    {
        double A;
        A=Length*Breadth;
        return A;
    }
};
int main()
{
    Rectangle R1(4,5);
    cout<<R1.Area()<<endl;
    Rectangle R2(5,8);
    cout<<R2.Area()<<endl;
    return 0;
}
