#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
template<typename T>
T vecSearch(vector <T> v, T b  ){
   for(int i = 0; i < v.size(); i++){
        if(v[i] == b){
            return i;
        }
    }
    return -1;

}
int main()
{
    vector <int> v = {1,3,32,4};

    cout << vecSearch( v, 4  ) << endl;
    return 0;
}
