#include<iostream>
using namespace std;
class Average
{
public:
    int a,b,c;
    Average(double x,double y,double z)
    {
        a=x;
        b=y;
        c=y;
    }
    friend void calc_avg(double x,double y,double z);
};
void calc_avg(double x,double y,double z)
    {
        cout << (x+y+z)/3 << endl;
    }
int main()
{
    int p,q,r;
    cin >> p >>q >>r;
    calc_avg(p,q,r);
    return 0;
}
