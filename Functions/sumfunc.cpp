#include <iostream>
using namespace std;

int sum(int a, int b){
    int ans = a + b;
    return ans;
}

int main(){
    int a,b;
    cout<<"Enter first num"<<endl;
    cin>>a;
    cout<<"Enter second num"<<endl;
    cin>>b;

    int answer = sum(a,b);
    cout<<"answer is "<<answer;
    return 0;
}