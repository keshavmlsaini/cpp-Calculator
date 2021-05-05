#include <iostream>
#include <cmath>
using namespace std;
class simpleCalculator
{
    int a, b;

public:
    void getdata()
    {
        cout << "Enter the value of a" << endl;
        cin >> a;
        cout << "Enter the value of b" << endl;
        cin >> b;
    }
    void performOperation()
    {
        cout << "Addition of two number is="
             << a + b << endl;
        cout << "Subtraction of two number is="
             << a - b << endl;
        cout << "Multiplication of two number is="
             << a * b << endl;
        cout << "Division of two number is="
             << a / b << endl;
    }
};
class scientificCalculator
{
    int a, b;

public:
    void getdata2()
    {
        cout << "Enter the value of a" << endl;
        cin >> a;
        cout << "Enter the value of b" << endl;
        cin >> b;
    }
    void performOperation2()
    {
        cout << "the cos of a  is="
             << cos(a) << endl;
        cout << "Sin of a is="
             << sin(a) << endl;
        cout << "The tan of a is="
             << tan(a) << endl;
        cout << "The square root of a is = "
             << sqrt(a) << endl;
    }
};
class HybridCalculator : public simpleCalculator,public scientificCalculator
{

};
int main()
{
    HybridCalculator cal;

    cal.getdata();
    cal.performOperation();
    cal.getdata2();
    cal.performOperation2();
    return 0;
}
