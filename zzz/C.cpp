#include <bits/stdc++.h>
using namespace std;

int knxor(int x,int y,int k)
{
    cout << "knxor" << x << "," << y << "=";
    int z=0;
    int p=1;
    while(x>0 || y>0)
    {
        int a=x%k;
        x=x/k;
        int b=y%k;
        y=y/k;
        int c=(a-b+k)%k;
        z=z+p*c;
        p=p*k;
    }
    cout << z << endl;
    return z;
}

int kxor(int x,int y,int k)
{
    cout << "kxor" << x << "," << y << "=";
    int z=0;
    int p=1;
    while(x>0 || y>0)
    {
        int a=x%k;
        x=x/k;
        int b=y%k;
        y=y/k;
        int c=(a+b)%k;
        z=z+p*c;
        p=p*k;
    }
    cout << z << endl;
    return z;
}

int main()
{
    int t=1;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        int p=0;
        for(int i=0;i<n;i++)
        {
            if(i==0)
                cout << 0 << endl;
            else if(i%2==0)
            {
                int q = kxor(p,i,k);
                cout << q << endl;
                p=knxor(q,p,k);
            }
            else
            {
                int q = knxor(p,i,k);
                cout << q << endl;
                p=knxor(q,p,k);
            }
            int v;
            cin >> v;
            if(v==1)
                break;
        }
    }
    return 0;
}
