#include<iostream>
using namespace std;
int main(){
	int years;
	double month=0,average=0;
	double rainfall=0,total_rainfall=0;
	cout<<"Number of Years ";
	cin>>years;
	if(years>0){
	for(int i=1;i<=years;i++){
		for(int x=1;x<=12;x++){
			cout<<"Inches Of Rainfall ";
			cin>>rainfall;
			if(rainfall<0){
				cout<<"Input Validation Error";
				exit(0);
			}
			total_rainfall+=rainfall;
			month++;
		}
	}
	}
	cout<<"Number of months "<<month<<endl;
	cout<<"Total Rainfall in inches "<<total_rainfall<<endl;
	average=total_rainfall/month;
	cout<<"Average rainfall Per Month "<<average;
}
