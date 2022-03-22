#include <iostream>

using namespace std;
template<typename A>
class Blok
{
private:
A sadrzaj;
int velicina=sizeof(A);
public:
    void setSadrzaj(A a){
    sadrzaj=a;
    }
    A getSadrzaj(){
    return sadrzaj;
    }
};
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
