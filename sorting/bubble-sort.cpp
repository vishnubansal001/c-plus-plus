#include <iostream>

using namespace std;

int bubble(int arr[],int n){
    int c=1;
    while(c<n){
        for(int i=0;i<n-c;i++){
            int temp;
            if(arr[i]>arr[i+1]){
                temp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
            }
        }
        c++;
    }
    for(int x =0;x<n;x++){
        cout<<arr[x]<<"  ";
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubble(arr,n);
    return 0;
}