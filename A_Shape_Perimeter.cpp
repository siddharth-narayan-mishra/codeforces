#include <iostream>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    int x1, y1, x2, y2;
    cin >> x1 >> y1;
    n--;
    x2 = x1 + m;
    y2 = y1 + m;
    while (n--)
    {
        int x, y;
        cin>>x>>y;
        x2 += x;
        y2 += y;
    }
    cout<< 2*((x2-x1)+(y2-y1))<<endl;
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
}