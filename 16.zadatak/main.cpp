#include <iostream>

using namespace std;
suma(int &b,int &a){
    return a+b;
}
int main()
{   int a = 2213;
    int b = 432;
    cout << suma(a,b) << endl;
    return 0;
}
