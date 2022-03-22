#include <iostream>

using namespace std;
class vozilo {
    int a;
    int b;

    public:
    vozilo(int a){
        this->a=a;
        this->b=10;
    }
    vozilo(int a,int b){
        this->a=a;
        this->b=b;
    }
    vozilo(){
        this->a=10;
        this->b=10;
    }
    void print(){
    cout<<this->a;
    }

};
int main()
{
        vozilo v1(1,2);

        v1.print();
    return 0;
}
