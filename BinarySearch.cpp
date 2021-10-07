#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int st;

int binarySearch(int arr[],int i, int j)
{
    int l=1,r=0;
    int mid=(i+j)/2;
    while(i<j)
    {
        if(arr[mid]==st)
        {
            return l;
        }
        if(st>arr[mid])
        {
            return binarySearch(arr,mid+1,j);
        }
        if(st<arr[mid])
        {
            return binarySearch(arr,i,mid);
        }
    }
    return r;
}
int main()
{
    int n,result;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter array elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<"Enter the Element to search: ";
    cin>>s;
    result=binarySearch(arr,0,n-1);
    if(result==1)
        cout<<"Element is present";
    else
        cout<<"Element is not present";
}
