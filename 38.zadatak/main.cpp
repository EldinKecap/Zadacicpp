#include <iostream>

using namespace std;

class vozilo{
    public:
    int a;
    int b;

    vozilo(){
        this->a=10;
        this->b=20;
    }
    void print();
    int getter();

};

int main()
{
    vozilo v;
    cout << v.a << endl;
    return 0;
}
