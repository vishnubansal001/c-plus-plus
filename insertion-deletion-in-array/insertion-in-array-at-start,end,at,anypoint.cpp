#include <iostream>

using namespace std;

int insertion(int arr[],int n,int i,int d){
    int a[n+1];
    for(int j = 0;j<i;j++){
        a[j]=arr[j];
    }
    a[i]=d;
    for(int j = i+1;j<n+1;j++){
        a[j]=arr[j-1];
    }
    for(int j=0;j<n+1;j++){
        cout<<a[j]<<"  ";
    }
    return 0;
}
int main()
{
    int n;
    cout<<"No. of element in array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int index;
    cout<<"give the index";
    cin>>index;
    int element;
    cout<<"give the element";
    cin>>element;
    insertion(arr,n,index,element);
    return 0;
}
