#include <iostream>

using namespace std;

int main()
{
    int a[3];
    a[0]= 1;
    a[1]= 2;
    a[2]= 3;
    int *p=a;
    cout<<*(p+0)<<'\t'<<*(p+1)<<'\t'<<*(p+2);
    return 0;
}
