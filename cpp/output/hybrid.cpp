#include <iostream>
using namespace std;

class numbers // base1
{
public:
    int n1, n2;

    void solve1()
    {
        cout << "enter 2 numbers : ";
        cin >> n1 >> n2;
    }
};

class sum : public numbers
{
protected:
    int plus;

public:
    void sums()
    {
        plus = n1 + n2;
        cout << "the sum is : " << plus << endl;
    }
};

class dif // base2
{
protected:
    int minus, n3, n4;

public:
    void solve2()
    {
        cout << "enter n3 and n4: ";
        cin >> n3 >> n4;
    }
};

class hybrid : public numbers, public dif
{
public:
int add;
    void difs()
    {
      
        cout<<"sum is : "<<add<<endl;
        minus = n4 - n3;
        cout << "the difference is : " << minus << endl;
    }
};

int main()

{
    sum b;
    b.solve1();
    b.sums();

    hybrid a;
    
    a.solve2();
    a.difs();
    a.solve1();

}