// 

#include<iostream>
using namespace std;

int main(){
	int arr[100];
	int pos=0,even=0,neg=0,odd=0,zero=0;
	int n;
	cin>>n;
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	
		for(int i = 0;i<n;i++){
        {
		if(arr[i]<0){
			neg++;
			
		}
		
		if(arr[i]>0){
			pos++;
		}
        }
		
		if(arr[i] == 0){
			zero++;
		}
        {
            if(arr[i]%2 == 0 && arr[i]!=0){
			even++;
			
		}
		
		else if (arr[i]!=0){
			odd++;
		}
        }
        
		}
		
		cout<<"positive "<<pos<<endl<<"negative "<<neg<<endl<<"Odd "<<odd<<endl<<"Even "<<even<<endl<<"Zero "<<zero;
}