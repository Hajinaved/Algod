#include<iostream>
using namespace std;
class code{
	int id;
public:
	code(){};
	code(int a){id=a;}
	code(code &x){
		id=x.id;
	}
	void display(void){
		cout<<id<<endl;
	}
};
int main(){
	code a(100);
	code b(a);
	code c = a;
	code d;
	d=a;
	cout<<"\n id of A: is ";a.display();
	cout<<"\n id of B: is ";b.display();
	cout<<"\n id of C: is ";c.display();
	cout<<"\n id of D: is ";d.display();
	fflush(stdin);
	cin.get();
	
	return 0;
}