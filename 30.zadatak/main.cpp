#include <iostream>
#include <list>
using namespace std;

int main()
{
    list <int> l;
    int k;
    while(cin>>k){
        l.push_back(k);
    }
    for(list <int> :: iterator it=l.begin(); it!=l.end();it++ ){
        cout<<*it<<endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}
