#include <iostream>
#include <vector>
using namespace std;
int n, h, width;
int main()
{
    cin >> n >> h;
    vector<int> f(n);
    for (int i = 0; i < n; i++) cin >> f[i];
    for (int i = 0; i < n; i++) f[i] > h ? width += 2 : width++;
    cout << width;
}