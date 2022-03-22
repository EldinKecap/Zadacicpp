#include <iostream>
#include <vector>
#include <string>
 using namespace std;

 int main () {
    vector<char> recenica;
    char a;
    while(cin>>a){

        recenica.push_back(a);

    }
    for(char b:recenica){
        cout<<b;
    }
 }
