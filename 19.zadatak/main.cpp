#include <iostream>
#include <string>
using namespace std;
bool krit(string i, string j){
    if(i.length()>j.length()){
        return true;
    }else {
    return false;
    }
}
int main()
{
    string a= "sadfewrqw" ;
    string b= "asdf52345324" ;
   cout<< krit(a,b) <<endl;
    return 0;
}
