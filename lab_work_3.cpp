#include <iostream>
#include <array>
using namespace std;
int main()
{
    int k[15] = {1, 15, 7, 23, 42, 8, 56, 33, 19, 65, 12, 39, 28, 50, 3};
    int i[15] = {91, 17, 62, 10, 47, 5, 78, 21, 37, 6, 84, 29, 55, 11};
    k[2] = 700;
    i[5] = 800;
    int sum_s = 0, sum_f = 0;
    for (int j = 0; j < 15; ++j)
    {
        sum_s += k[j];
        sum_f += i[j];
    }
    cout << "Third element of array s:" << k[2] << endl;
    cout << "6th element of array f:" << i[5] << endl;
    cout << "Sum of elements in array k: " << sum_s << endl;
    cout << "Sum of elements in array i: " << sum_f << endl;
    return 0;
}