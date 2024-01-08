#include<bits/stdc++.h>
using namespace std;
int main(){
	cout<<"\n\t\t\t\t---------- Welcome to Simple Calculator----------\n"<<endl;
	int a,b;
	char x;
	cout<<"Enter the First Operand : ";
	cin>>a;
	cout<<"Enter the Second Operand : ";
	cin>>b;
	int z = 4;
	while(z--){
		cout<<"Please! Enter the operation you want to Perform ('+' , '-' , '*' , '/') : ";
		cin>>x;
		cout<<endl;
		switch(x){
			case '+' : cout<<"Addition of two number is : ";
		           	cout<<"("<<a<<"+"<<b<<")"<<" = "<<a+b<<endl;
		           	break;
		           
			case '-' : cout<<"Subtraction of two number is : ";
		           	cout<<"("<<a<<"-"<<b<<")"<<" = "<<a-b<<endl;
		           	break;
		
			case '*' : cout<<"Multiplication of two number is : ";
		           	cout<<"("<<a<<"*"<<b<<")"<<" = "<<a*b<<endl;
		           	break;
		           
			case '/' : cout<<"Division of two number is : ";
		           	cout<<"("<<a<<"/"<<b<<")"<<" = "<<a/b<<endl;
		           	break;
		}
	}
	
	
	return 0;
}