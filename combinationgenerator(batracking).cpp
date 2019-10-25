#include <bits/stdc++.h>
using namespace std;
int number[2000];
int n,k;//n=total elements,k is the value of elements number to make combination
void combination(int a,int left)
{
   if(left>n-a+1)
        return ;

    if(a == n+1)
    {
        for(int i=1; i<=k; i++)
            {cout<<number[i]<<" ";}
        cout<<endl;
        return ;
    }
    if(left)
    {
        number[k-left+1]=a;
        combination(a+1,left-1);
    }
    combination(a+1,left);

}

int main()
{
    cout<<"Enter the value of n and k"<<endl;
    cin>>n>>k;
    combination(1,k);
    //this function is initialize with 1 and upto k
    //because the combination will be consist of k elements;
    return 0;

}
