#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    int i;
    while(cin>>i){
        v.push_back(i);
    }
    if(v.size()>5){
        v.pop_back();
        v.pop_back();
    }
    for(int i : v){
        cout<<i<<endl;
    }
    return 0;
}
