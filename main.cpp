#include <iostream>

using namespace std;

int main()
{
    long long int i,j,k,t,n,fist=0,hand=0;
    cin>>t;
    for(k=0;k<t;k++)
    {
        hand=fist=0;
        cin>>n;
        long long int arr[n];
        for(j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(arr[arr[i]]==arr[arr[j]])
                {
                    fist++;
                }
                else
                {
                    hand++;
                }
            }
        }
        cout<<hand<<" "<<fist<<endl;
    }
    return 0;
}
