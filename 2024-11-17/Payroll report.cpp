#include<iostream>
using namespace std;
int main(){
int employee_no,gross_pay,state_tax,federal_tax,FICA,sum;
cout<<"Enter The Employee Number ";
cin>>employee_no;

while(employee_no!=0){
	if(employee_no<0){
	cout<<"Enter Positive Employee Number ";
	cin>>employee_no;
	continue;
}
	
	cout<<"Gross Pay of "<<employee_no<<" ";
	cin>>gross_pay;
	while(gross_pay<0){
	cout<<" Re Enter Gross Pay of "<<employee_no<<" ";
	cin>>gross_pay;
	}
	cout<<"State Tax of "<<employee_no<<" ";
	cin>>state_tax;
	while(state_tax<0 || state_tax>gross_pay){
	cout<<" Re Enter State Tax of "<<employee_no<<" ";
	cin>>state_tax;
	}
	cout<<"Federal Tax of "<<employee_no<<" ";
	cin>>federal_tax;
	while(federal_tax<0 || federal_tax>gross_pay){
	cout<<" Re Enter Federal Tax of "<<employee_no<<" ";
	cin>>federal_tax;
	}
	cout<<"FICA of "<<employee_no<<" ";
	cin>>FICA;
	while(FICA<0 || FICA>gross_pay){
	cout<<" Re Enter FICA of "<<employee_no<<" ";
	cin>>FICA;
	}
	sum=state_tax+federal_tax+FICA;
	if(sum>gross_pay){
		cout<<"As you have entered wrong Data "<<endl;
		cout<<"You Should Have to Enter Data again ";
	   continue;
	}
	cout<<"         employee "<<employee_no<<"         "<<endl;
	cout<<"Gross Pay "<<gross_pay<<endl;
	cout<<"State Tax "<<state_tax<<endl;
	cout<<"Federal Tax "<<federal_tax<<endl;
	cout<<"FICA with Darw "<<FICA<<endl;
	cout<<"Net Pay "<<gross_pay-sum<<endl;
	cout<<"Enter the next Employee Number ";
	cin>>employee_no;
}
cout<<"Program Exited Successfully ";
return 0;
}
