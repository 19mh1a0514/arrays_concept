#include<iostream.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,temp;
  cout<<"Enter total no. of elements"<<endl;
  cin>>n;
  cout<<"Enter "<<n<<" elements"<<endl;
  for(int i=0;i<n;i++)
  {
     cin>>arr[i];
  }
  for(int j=0;j<n/2;j++)
  { 
     temp=arr[i];
     arr[i]=arr[n-j-1];
     arr[n-j-1]=temp;
  }
  cout<<"array in reverse"<<endl;
  for(int i=0;i<n;i++)
  {
     cout<<arr[i]<<endl;
  }   
