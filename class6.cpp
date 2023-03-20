#include <iostream>
using namespace std;
class Area
{
public:
    int length, bredth;
    void setDim(int l, int b)
    {
        length = l;
        bredth = b;
    }
    int getarea()
    {
        return length * bredth;
    }
};
int main()
{
    Area obj;
    int len, bre;
    cin >> len >> bre;
    obj.setDim(len, bre);
    cout << obj.getarea() << endl;
}
