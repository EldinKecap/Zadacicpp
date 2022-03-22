#include <iostream>

using namespace std;

class lista{
 public:

    int *p ;
    lista(){
        p= new int [10];
    }
    lista(int i){
        p = new int [i];
    }
    ~lista(){
    delete [] p;
    }
} ;
int main()
{
    lista l(4);
    l.p[0]=12;
    for(int i=0; i< 10;i++ ){
        cout<<l.p[i]<<endl;
    }
    return 0;
}
