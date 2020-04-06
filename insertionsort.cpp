//insertion sort

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1000],c,d,t;
    //"Enter the number of elements:
    cin>>n;
    for(c=0; c<n; c++)
    {

        cin>>a[c];
    }
    for(c=1; c<=n-1; c++)
    {
        d=c;
        while(d>=0 && a[d-1]>a[d])
        {
            t=a[d];
            a[d]=a[d-1];
            a[d-1]=t;
            d--;
        }
    }
    for(c=0; c<=n-1; c++)
    {

        cout<<a[c]<<endl;
    }
    return 0;
}
