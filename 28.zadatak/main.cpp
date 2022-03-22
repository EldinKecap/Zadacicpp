#include <iostream>

using namespace std;

 struct vozilo{
    int a=4;
    int b=2;
    int c=3;

 };
bool sortFunc(vozilo o,vozilo b){
      return o.a>b.a;

}
int main()
{


    cout << "Hello world!" << endl;
    return 0;
}
