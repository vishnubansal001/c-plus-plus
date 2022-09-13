#include <iostream>

using namespace std;

int linear(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        if(k==arr[i]){
            return i;
        }
    }
    return -1;
}

int deletion(int arr[],int n,int d){
    int index = linear(arr,n,d);
    int a[n];
    for(int j = 0;j<index;j++){
        a[j]=arr[j];
    }
    for(int j = index+1;j<n;j++){
        a[j-1]=arr[j];
    }
    for(int j=0;j<n-1;j++){
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
    int element;
    cout<<"give the element";
    cin>>element;
    deletion(arr,n,element);
    return 0;
}

