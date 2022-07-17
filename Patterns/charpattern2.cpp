#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        int j = 1;
        int k = i;
        while(j<=i){
            cout<<char(n - k + 1 +'A');
            j++;
            k--;
        }
        cout<<endl;
        i++;
    }
}
