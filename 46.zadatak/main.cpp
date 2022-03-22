#include <iostream>

using namespace std;
class lista
{   public:
    int vel;
    int* p;

    lista() : p(new int [1]),vel(0){}
    lista(int a) : p(new int [vel]),vel(a){}
    lista(const lista &a){
    vel=vel;
    for(int i = 0; i<vel;i++){
        *(p+i)=*(p+i);
    }
    }
    ~lista(){delete []p;}
};

int main()
{
    lista v(10);
    lista b;

    for(int i=0; i<10;i++){
       *(v.p+i)=i+45;
    }

    for(int i=0; i<10;i++){
       cout<<*(v.p+i)<<'\n';
    }

    b=v;

    for(int i=0; i<10;i++){
       cout<<*(b.p+i)<<'\t';
    }

    return 0;
}
/*class Lista
{
private:
int *glava;
int vel;
int kap;
public:
Lista() : glava(new int[1]), vel(0), kap(1) {}
Lista(int n) : glava(new int[n]), vel(0), kap(n) {}
Lista(const Lista&);
~Lista() { delete [] glava; }
int velicina() const { return vel; }
int kapacitet() const { return kap; }
int* prvi() const { return glava; }
void dodaj(int a);
};
Lista::Lista(const Lista& b)
{
kap = b.kapacitet();
vel = b.velicina();
glava = new int[kap];
for(int i=0;i<vel;i++)
*(glava+i) = *(b.prvi() + i);
}
int main()
{
Lista a;
a.dodaj(3);
a.dodaj(4);
Lista b = a; //poziva se copy konstruktor
return 0;
}*/
