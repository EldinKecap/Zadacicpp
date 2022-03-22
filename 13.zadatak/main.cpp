#include <iostream>

using namespace std;

int main()
{
    int a=10;
    int &b=a;
    const int a1=10;
    const int &b1=a1;
    b=20;


    cout << "Hello world! "<< a << "reference " << b ;
    cout << "constant value "<< a1 << "constant reference "<< b1 << endl;
    return 0;
}
