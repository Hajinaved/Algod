#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char str[]= "Test";
	int len = strlen(str);
	for (int i=0;i<len;i++){
	cout<<str[i]<<i[str]<<*(str+i)<<*(i+str);
	}
	cout<<endl;
	int lenm = len/2;
	len--;
	for(int i=0;i<lenm;i++){
	str[i]     = str[i] + str[len - i];
	str[len-i] = str[i] - str[len - i];
	str[i]     = str[i] - str[len - i];
	}
	cout<<"the Reversed : "<<str;
	fflush(stdin);
	cin.get();
	return 0;

}