#include <iostream>
#include <vector>
using namespace std;
int n, c, ans;
int main()
{
    cin >> n;
    vector<vector<int>> a(n, vector<int>(3));
    //input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];
    }
    //count
    for (int k = 0; k < n; k++)
    {
        c=0;
        for (int l = 0; l < 3; l++)
        {
            if (a[k][l] == 1)
                c += 1;
        }
        if(c>=2) ans+=1;
    }
    cout << ans;
}