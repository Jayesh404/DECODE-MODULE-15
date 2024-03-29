# include <iostream>
using namespace std;

int main(){

    string s="AVKYYBSONBNNZIEDMERNPHCTNFO";
    for(int i=1;i<s.length();i++){
        for(int j=0;j<s.length()-i;j++){
            if(s[j]>s[j+1]){ 
                swap(s[j],s[j+1]);
            }
        }
    }
    for(int i=0;i<s.length();i++){
        cout<<s[i]<<" ";
    }
    return 0;
}