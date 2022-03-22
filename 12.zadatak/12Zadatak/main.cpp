#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector <int> vec;
    int i;
    while ( cin>>i ){
        vec.push_back(i);
        cout<<"za kraj unosa pritisnite slovo"<<endl;
    }
    sort( vec.begin() , vec.end());
    for(int i: vec){
      cout << i << endl;
    }

    return 0;
}
