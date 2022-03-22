#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int,int> korijen;
    for (int i=10;i>=1;i--){
        korijen.insert(make_pair(i,i*i));
    }
    for(auto &i: korijen){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}
