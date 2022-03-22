#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v;
    int a;
    while (cin>>a){
        v.push_back(a);
        cout<<"da prestanete sa unosom unesite slovo"<<endl;
    }
    for(vector <int> :: iterator it=v.begin(); it!=v.end();it++)cout<<*it<<endl;

    return 0;
}
