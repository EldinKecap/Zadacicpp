#include <iostream>

using namespace std;

int main()
{
    int a =24;
    auto b = [a](){
    cout << a << endl;
    };
    b();


    return 0;
}
