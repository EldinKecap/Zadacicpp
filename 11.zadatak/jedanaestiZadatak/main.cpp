#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> vec;
    int i;
    while (cin>>i){
        vec.push_back(i);
        cout<<"za kraj ukucajte slovo"<<endl;

    }

     cout << vec.size() << endl;


    return 0;
}
