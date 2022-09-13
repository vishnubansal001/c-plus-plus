#include <iostream>

using namespace std;

void swap(int arr[],int a,int b){
    int temp;
    temp = arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}


int partition(int arr[],int l,int r){
    int pi = arr[r];
    int i = l-1;
    for(int j = l;j<r;j++){
        if(arr[j]<pi){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,r);
    return i+1;
}


void quicksort(int arr[],int l,int r){
    if(l<r){
        int pi = partition(arr,l,r);
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,r);
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
    int l = 0;
    int r = n-1;
    quicksort(arr,l,r);
    for(int j=0;j<n;j++){
        cout<<arr[j]<<"  ";
    }
    return 0;
}
