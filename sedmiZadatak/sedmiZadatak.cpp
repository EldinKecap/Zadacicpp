#include <iostream>
#include <string>

using namespace std;

int main ( ){
    string a, b ;
    cout<<"unesite 2 rijeci odvojene spaceom:"<<endl;
    cin>>a>>b;
    if(a.compare(b)!=0){
        cout<<"vase rijeci nisu iste"<<endl;
    }else if(a.compare(b)==0){
        cout<<"vase rijeci su iste"<<endl;
    }

}
