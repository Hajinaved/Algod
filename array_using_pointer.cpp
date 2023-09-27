#include<iostream>
using namespace std;
int main(){
	int number[50],*p;
	int n;
	cout<<"enter the number of elements "<<endl;
	cin>>n;
	cout<<"enter "<<n<<"elements"<<endl;
	for(int i=0;i<n;i++){
		cin>>number[i];
	}
	p=number;
	int sum =0;
	for(int j=0;j<n;j++){
		if(*p%2==0){
			sum=sum+*p;
			p++;
		}

	}
	cout<<"sum of all even digit number in an array is :"<<sum<<endl;
	fflush(stdin);
	cin.get();
	return 0;					
}