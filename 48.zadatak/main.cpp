#include <iostream>

using namespace std;

int main()
{
    int i=10;
    int &lval=i;
    int &&rvalue=i-2;
    cout<<lval<<'\t'<<rvalue<<endl;
    return 0;
}
