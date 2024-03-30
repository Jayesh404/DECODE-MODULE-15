# include <iostream>
# include <limits.h>
using namespace std;

int main(){

    int k;
    cin>>k;
    int arr[5]={54,67,54,23,11};

    for(int i=0;i<4;i++){
        int min=INT_MAX;
        int mindx=-1;
        for(int j=i+1;j<5;j++){
            if(arr[j]<min){
                min=arr[j];
                mindx=j;
            }
        }
        swap(arr[i],arr[mindx]);
    }
    cout<<arr[k-1];

    return 0;
}