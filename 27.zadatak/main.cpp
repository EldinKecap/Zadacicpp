#include <iostream>

using namespace std;
struct osoba{
    int ime;
    int prezime;

};
void func(osoba &o){
    o.ime = 1;
    o.prezime = 1;
}

int main()
{
    osoba o;
    func(o);
    cout<<o.prezime;
    return 0;
}
