#include<iostream>
using namespace std;
class alpha{
	int x;
	public:alpha(int i)
	{
		x=i;
		cout<<"\nalpha constructed"<<endl;
	}
	void show_alpha(void){
		cout<<"x = "<<x<<endl;
	}
};
class beta{
	float p,q;
public:
	beta(float a,float b):p(a),q(b+p)
	{
		cout<<"\n beta constructed"<<endl;
	}
	void beta_show(void){
		cout<<"p = "<<p<<endl;
		cout<<"q = "<<q<<endl;
	}
};
class gamma : public beta,public alpha
{
	int u,v;
public:
	gamma (int a,int b,float c):alpha(a*2),beta(c,c),u(a){
		v=b;cout<<"\n gamma constructed"<<endl;}
	void show_gamma(void){
		cout<<"u = "<<u<<endl;
		cout<<"v = "<<v<<endl;
	}	
};
int main(){
	gamma g(2,4,2.5);
	cout<<"\n\n\n Display member values\n";
	g.show_alpha();
	g.beta_show();
	g.show_gamma();
	
	fflush(stdin);
	cin.get();
	return 0;					
}