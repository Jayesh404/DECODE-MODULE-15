# include <iostream>
using namespace std;

int main(){

    int arr[]={2,4,5,2,5};
    bool flag;
    for(int i=1;i<5;i++){
        flag=true;
        for(int j=0;j<=5-i;j++){
            if(arr[j]>arr[j+1]){ 
                swap(arr[j],arr[j+1]);
                flag=false;
            }
        }
        if(flag) break;
    }
    int num1=0;
    for(int i=0;i<5;i++){
        num1=num1*10+arr[i];
    }
    for(int i=5-1;i>=1;i--){
        if(arr[i]!=arr[i-1]){
            swap(arr[i],arr[i-1]);
            break;
        }
    }
    int num2=0;
    for(int i=0;i<5;i++){
        num2=num2*10+arr[i];
    }
    cout<<num1+num2;

    return 0;
}