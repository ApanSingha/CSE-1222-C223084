
#include<iostream>
#include<math.h>
using namespace std;
class Triangle
{
public:
    int a,b,c;
     void area()
    {
        double area,s;
        s=((a+b+c)/2.0);
         area = sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<"Area = "<<area<<endl;
    }
    void perimeter()
    {
        int p;
        p=a+b+c;
        cout<<"Perimeter = "<<p<<endl;
    }
    Triangle(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
};
int main()
{
    Triangle A(3,4,5),P(3,4,5);
    A.area();
    P.perimeter();
    return 0;
}
