#include <iostream>
//i think this is what you need to do but im not sure

using namespace std;
class lista{
    int*p;
    int vel;
public:
    lista():p(new int [10]),vel(0){}
    lista(int a):p(new int [vel]),vel(0){}
    ~lista(){delete []p;}
    lista(const lista &a);
    lista(const lista &&a);
    getp ();
    setP ();
    lista& operator = (const lista&a);
    lista& operator = (const lista&&a);
    lista& operator+(const T& b); //operator sabiranja
    lista& operator++(); //prefix notacija ++ npr. ++i
    lista operator++(int); //postfix notacija ++ npr. i++
    lista& operator[](int i); //operator indeksiranja


};
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
