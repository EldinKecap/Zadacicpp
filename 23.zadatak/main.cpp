#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

int fun(int a[],int b){
    for(int i=0;i<10;i++){
        if(a[i]==b){
            return i;
        }else return -1;
    }
    }

int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,99};
    int b =42;
    int c=fun(a,b);
    cout << c<<endl;
    return 0;
}
