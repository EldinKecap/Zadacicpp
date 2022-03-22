#include <iostream>

using namespace std;

int main()
{
    int a=456;
    int *p=&a;
    cout<<a<<'\t'<<&a<< '\t' <<p<<'\t'<<*p;
    return 0;
}
