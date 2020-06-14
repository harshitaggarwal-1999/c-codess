#include<bits/stdc++.h>
using namespace std;

class base
{
	public:
		void display(){
			cout<<"display base";
		}
		virtual void show(){
			cout<<"show base";
		}
};

class Derived: public base
{
	public:
		void display(){
			cout<<"display der";
		}
		void show(){
			cout<<"show der";
		}
};

int main(){
	base B;
	Derived  D;
	base *bptr;
	bptr = &B;
	bptr->display();
	bptr->show();
	bptr = &D;
	bptr->display();
	bptr->show();
}
