#include <iostream>
using namespace std;

void solve()
{
    int x=0;
    for (int i = 0; i < 25; i++)
    {
        int a;
        cin>>a;
        if (a==1)
        {
            x=i;
            break;
        }
    }
    int row = x/5;
    int col = x%5;
    cout<<abs(row-2)+abs(col-2)<<endl;
}

int main()
{
    solve();
}