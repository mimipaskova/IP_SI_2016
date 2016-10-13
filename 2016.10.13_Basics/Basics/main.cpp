#include <iostream>

using namespace std;

int main()
{

    bool x = true;

    bool y = false;
    bool z = y ^ !x;
    cout<<z<<endl;

    return 0;
}
