#include <iostream>
#include <map>
using namespace std;

int main()
{
    map <int,int> a;
    int i;

    for( i = 1 ; i<=5 ; i++){
        a.insert(make_pair( i , i));
    }

    for(auto i : a){
        cout<<i.second<<endl;
    }

    a.erase(3);

        for(auto i : a){
     cout<<i.second<<endl;
    }
    return 0;
}
