#include <iostream>

using namespace std;

template <typename T>
T funk(T a,T b){
    return a+b;
}
int main()
{
    int a= funk(2,3);
    float b = funk(2.34,3.43);
    cout << a << " " << b <<endl;
    return 0;
}
