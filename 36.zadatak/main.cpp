#include <iostream>

using namespace std;

struct vozilo {
    int a;
    int b;

};

void setter(vozilo &a){
    a.a=1;
}
int getter(vozilo &a){
    return a.a;
    }
int main()
{
    vozilo car;
    setter(car);

    cout << getter(car) << endl;
    return 0;
}
