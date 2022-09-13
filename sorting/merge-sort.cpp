#include <iostream>

using namespace std;
void merge(int arr[],int l,int mid,int r){
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++){
        int abc=l+i;
        a[i]=arr[abc];
    }
    for(int i=0;i<n2;i++){
        int abc=mid+1+i;
        b[i]=arr[abc];
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(a[i]>b[j]){
            arr[k]=b[j];
            k++;
            j++;
        }
        else{
            arr[k]=a[i];
            i++;
            k++;
        }
    }
    while(i<n1){
        arr[k]=a[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=b[j];
        k++;
        j++;
    }
}

void mergeSort(int arr[],int l,int r){
    if(l<r){
        int mid = (l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
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
    int l=0;
    int r=n-1;
    mergeSort(arr,l,r);
    for(int j=0;j<n;j++){
        cout<<arr[j]<<"  ";
    }
    return 0;
}

