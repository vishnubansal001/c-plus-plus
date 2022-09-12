#include <iostream>

using namespace std;

int binary(int arr[],int n,int k){
    int st=0,end=n;

    while(end>=st){
        int mid = (st+end)/2;
        if(k==arr[mid]){
            return mid;
        }
        else if(arr[mid]>k){
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return -1;
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<binary(arr,n,k)<<endl;
    return 0;
}

