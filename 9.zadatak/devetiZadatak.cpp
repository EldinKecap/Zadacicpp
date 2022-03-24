#include <iostream>
#include <string>
using namespace std;

int main () {
    string rijec1="DSFDFD";
    string rijec2="dfasd";
    if(rijec1.length()<rijec2.length()){
        cout<<rijec1<<" je krace od "<<rijec2;
    }else if (rijec1.length()==rijec2.length()){
        cout<<rijec2<<" je jednako "<<rijec1;
    }else{
        cout<<rijec2<<" je krace od "<<rijec1;
    }
}
