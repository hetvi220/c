#include <iostream>
using namespace std;

class largest
{
    int a, b;

public:
    friend largest add(largest, largest);

    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }

    void show()
    {

        cout << "enter a: ";
        cin >> a;
        cout << "enter b : ";
        cin >> b;
        if (a > b)
        {
            cout << a << " is the largest number ";
        }
        else
        {
            cout << b << " is the largest of the two";
        }
    }
};

int main()
{

    largest p;
    p.show();

    return 0;
}