/* A
   BC
   CDE
   DEFG
   EFGHI */

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;

    for(int i = 1; i<=n; i++){
        int k = i;
        for(int j = 1; j<=i; j++){
            cout<<char('A'+k-1);
            k++;
        }
        cout<<endl;
    }
}
