#include <iostream>

using namespace std;
class aa {

public:
    static int counter;
    aa(){
    counter++;
    }
};
int aa :: counter = 0;
int main()
{
    aa a;
    aa b;
    cout << b.counter<<endl;
    cout << "Hello world!" << endl;
    return 0;
}
