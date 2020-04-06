//bubble sort
//O(n*n) but what about sorted array??? can u think better complexity???!!!! think!!!


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, num[1000], c, d, t,temp;

    //"Enter number of elements\n"
    cin>>n;


    for (c = 0; c < n; c++)

        cin>>num[c];

    for (c = 1 ; c <= n ; c++)
    {
        for(d=1;d<n;d++)
        {
            if(num[d+1]>num[d])
            {
                temp=num[d];
                num[d]=num[d+1];
                num[d+1]=temp;
            }
        }
    }
    cout<<"Sorted list in ascending order:"<<endl;

        for (c = 0; c <= n - 1; c++)
        {

            cout<<num[c]<<endl;
        }

        return 0;
    }

