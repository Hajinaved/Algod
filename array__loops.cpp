#include<iostream>
using namespace std;
int main(){
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int i=0;
	/*for(;;){
	cin>>arr[i];
	
	if(i==9)
	{break;
	 }
	 i++;
	}*/
	i=0;

	while(i<=9){
	cout<<arr[i]<<endl;
	i++;
	}
	fflush(stdin);
	cin.get();
	/*cin.get();*/
	return 0;

}