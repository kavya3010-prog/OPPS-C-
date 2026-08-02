#include<iostream>
using namespace std;
int main(){
int a[100],n;
cout<<"Enter no. of elements:";
cin>>n;
cout<<"Enter array elements:\n";
for(int i=0;i<n;i++)
    cin>>a[i];
cout <<"Reversed array:\n";
for(int i=n-1;i>=0;i--)
    cout<<a[i]<<"";
return 0;
}
