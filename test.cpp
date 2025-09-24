#include <vector>
#include <queue>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 5;
    int b = 3;
    char c = 'c';
    float d = 4.5;
    double e = 1.467e-30;
    float f = (float) e;
    cout << e << endl; // Outputs 1.66667
    cout << f << endl; // Outputs 1.66667

    return 0;
}
