#include <bits/stdc++.h>
using namespace std;
int number[2000];
int n,k;//n=total elements,k is the value of elements number to make combination
void combination(int a,int last)
{


    if(a == k+1)
    {
        for(int i=1; i<=k; i++)
            {cout<<number[i]<<" ";}
        cout<<endl;
        return ;
    }
    for(int i=last+1;i<=n-k+a;i++)
    {
        number[a]=i;
        combination(a+1,i);
    }

}

int main()
{
    cout<<"Enter the value of n and k"<<endl;
    cin>>n>>k;
    combination(1,0);

    return 0;

}
