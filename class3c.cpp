#include<iostream>
#include<math.h>
using namespace std;
class Triangle
{
public:
    int a=3,b=4,c=5;
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
};
int main()
{
    Triangle X;
    X.area();
    X.perimeter();
    return 0;
}
