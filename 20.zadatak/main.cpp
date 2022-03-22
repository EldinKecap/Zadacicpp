#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string word="dfdsasfniggadsfasdf";
    sort(word.begin(),word.end(),[](int a, int b){return a<b;});
    cout<<word;

    return 0;
}
