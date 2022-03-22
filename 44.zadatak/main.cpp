#include <iostream>

using namespace std;

int main()
{
    int *p;
    p = new int [2];
    p[0]=1;
    p[1]=2;
    cout<<*(p+0)<<*(p+1);
    delete []p;
    return 0;
}
