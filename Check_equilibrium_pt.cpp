#include <iostream>
using namespace std;
int func(int arr[],int n)
{
    int cnt,ls,rs=0;
    for(int k=0;k<n;k++)
    {
        rs+=arr[k];
    }
    ls=0;
    for(int i=0;i<n;i++)
    {
        rs-=arr[i];
        if(ls==rs)
        {
            return true;
            break;
        }
        ls+=arr[i];
    }
    return 0;
}

int main()
{
    int n,ans;
	cout<<"Enter number of elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array : ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    ans=func(arr,n);
    if(ans==0)
        cout<<"No equilibrium point";
    else
        cout<<"Equilibrium point exists";
return 0;
}
