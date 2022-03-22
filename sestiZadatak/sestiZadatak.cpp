#include <iostream>

using namespace std;

int main() {

    string a;
    getline(cin,a);

    if(a.empty()!=0){
        cout<<"string je prazan"<<endl;
    }else if(a.empty()==0){
    cout<<"velicina vaseg stringa je "<<a.length()<<endl;
    }
    cout << a.length() <<endl;

}
