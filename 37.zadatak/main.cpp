#include <iostream>

using namespace std;

struct artikal {
    int a;
    int b;

    void setter(int g){
        this->a=g;
    }
    int getter (){
    return this->a;
    }
};

int main()
{
    artikal cizma;
    cizma.setter(34);
    cout<<cizma.getter();
    return 0;
}
