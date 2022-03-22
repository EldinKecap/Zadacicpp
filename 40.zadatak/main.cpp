#include <iostream>

using namespace std;

class vozilo {

    int a=1;
    int b=2;

public:

    void print();
    void setter(int a);
    int getter();

};

void vozilo::print(){

    cout<<this->a<< '\t' <<this->b;

}

void vozilo::setter(int a){

    this->a=a;

}

int vozilo::getter(){

    return this->a;

}

int main()
{
    vozilo v1;

    v1.setter(25);
    v1.print();

    return 0;
}
