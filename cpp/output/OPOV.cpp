#include <iostream>
using namespace std;
class increment
{

    int a, b; 

public:
    increment()
    {
        a = 0;
        b = 0;
    }

    increment(int m, int n)
    {
        a = m;
        b = n;
    }

    void display()
    {

        cout << "a is : " << a << endl;
        cout << "b is : " << b << endl;
    }

    void operator++()
    {
        a--;
        b--;
    }
};
int main()
{

    class increment v(45, 6);
    cout << "BEFORE CHANGE : " << endl;
    v.display();
    v.operator++();
    cout << "AFTER CHANGE : " << endl;
    v.display();
    return 0;
}