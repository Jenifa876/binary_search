#include<bits/stdc++.h>
using namespace std;
int bin_search(int a[],int low,int high,int x)
{
    while(high>=low)
    {
        int mid=low+(high-low)/2;
        if(a[mid]==x)
        {
            return mid;
        }
        if(a[mid]<x)
        {
            low=mid+1;
        }
        else
            high=mid-1;
    }
    return -1;
}
int main()
{
    int a[10],n,key;
    cout<<"Enter the no of elements:";
    cin>>n;
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Sorted array:";
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\nEnter the key element:";
    cin>>key;
    int result=bin_search(a,0,n-1,key);
    if(result==-1)
    {
        cout<<"\nElement is not found";
    }
    else
    {
        cout<<"\nElement is found at the position:"<<result+1;
    }
}
