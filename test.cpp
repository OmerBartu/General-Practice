#include <vector>
#include <queue>
#include <iostream>
#include <stdlib.h>
using namespace std;

int swap(int * num1, int * num2);

int main(int argc, char const *argv[])
{
    
    int a = 5;
    int b = 3;
    char c = 'c' + 1;
    float d = 123414.5123123;
    double e = 1.467e-30;
    float f = (float) e;
    int k = (int) d;

    // for (size_t i = 0; i < 20; i++)
    // {
    //     int random = rand();
    //     cout << random << endl;
    // }

    cout <<  c;
    

    

    return 0;
}

int swap(int * num1, int * num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    return 0;
}
