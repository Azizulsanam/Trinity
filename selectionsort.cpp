//selection sort


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, num[1000], c, d, t;

    //"Enter number of elements\n"
    cin>>n;


    for (c = 0; c < n; c++)

        cin>>num[c];

    for (c = 1 ; c <= n ; c++)
    {
        for(d=c+1; d<=n; d++)
        {
            if(num[c]>num[d])
            {
                swap(num[c],num[d]);
            }
        }


        cout<<"Sorted list in ascending order:"<<endl;

        for (c = 0; c <= n - 1; c++)
        {

            cout<<num[c]<<endl;
        }

        return 0;
    }
}
