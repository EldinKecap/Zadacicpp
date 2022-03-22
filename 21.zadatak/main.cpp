#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{   vector <string> v;
    string a;
    while (cin>>a){
        if(a=="0"){
            break;
        }
        v.push_back(a);

    }
   sort(v.begin(),v.end(),[](string a , string b){ return a.size() < b.size();});
    for(string a : v ){
        cout<<a<<endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}
