#include <iostream>
using namespace std;
int main()
{
int lengths[6];
for (int x = 0; x < 6; x++)
    lengths[x] = x * x;
for (int y= 0 ; y < 6; y++)
    cout << lengths[y] << " ";
}