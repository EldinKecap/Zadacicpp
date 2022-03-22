#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    auto b = [&a](){
        cout<<a<<endl;
    };
    b();
    return 0;
}
