#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i=1;
	char c;
	while(i<=n){
		int j=1;
		char ch=n-i+64+1;
		while(j<=i){
			c=ch+j-1;
			cout<<c;
			j++;
		}
		i++;
		cout<<endl;
	}
}

