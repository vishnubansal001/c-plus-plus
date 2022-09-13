  #include <iostream>

using namespace std;

int insertion(int arr[],int n){
    for(int i=1;i<n;i++){
        int c=arr[i];
        int j=i-1;
        while(arr[j]>c && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=c;
    }
    for(int x=0;x<n;x++){
        cout<<arr[x]<<"  ";
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertion(arr,n);
    return 0;
}
