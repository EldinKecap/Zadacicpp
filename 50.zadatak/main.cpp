#include <iostream>

using namespace std;
class osoba{
    public:
    string ime;
    string prezime;
    int godiste;
    osoba(): ime("eldin"),prezime("kecap"),godiste(1998){}
};

class student : public osoba{
    int brojIndexa;
    int brojPredmeta;
    public:
    student(): brojIndexa(014417),brojPredmeta(1){}

};
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
