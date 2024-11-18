#include<iostream>
using namespace std;
int main(){
	double farenheit;
	cout<<"Celcius                Farenheit"<<endl;
	for(int i=0;i<=20;i++){
		farenheit=(i*(9.0/5))+32;
		cout<<i<<"           "<<farenheit<<endl;
	}
}
