#include<iostream>
using namespace std;
int main(){
int a[100],n,sum=0;
cout<<"Enter no. of elements:";
cin>>n;
cout<<"Enter array elements:\n";
for(int i=0; i<n;i++){
    cin>>a[i];
    sum+=a[i];
}
cout<<"Sum of array elements="<<sum;
return 0;
}
