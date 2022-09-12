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
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }
    int k;
    cin>>k;
    cout<<linear(arr,n,k)<<endl;
    return 0;
}

