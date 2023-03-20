#include <iostream>
using namespace std;
class Area
{
public:
    int length, bredth;
    Area(int l, int b)
    {
        length = l;
        bredth = b;
    }
    int returnarea()
    {
        return length * bredth;
    }
};
int main()
{
    int len, bre;
    cin >> len >> bre;
    Area obj(len,bre);
    cout << obj.returnarea() << endl;
}
