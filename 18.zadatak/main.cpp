#include <iostream>

using namespace std;

void promjena(int &i){
    i+=1;
}

int main()
{
    int a=1;
    promjena(a);
    cout<<a<<endl;
    return 0;
}
