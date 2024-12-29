#include<iostream>
using namespace std;
int main(){
double starting_balance,months_no,annual_interest_rate,amount_deposited,amount_withdrawn,balance,monthly_interest_rate,monthly_interest,total_deposits=amount_deposited,total_interest=monthly_interest,total_withdraw=amount_withdrawn;
cout<<"The Starting Balance In Account Is ";
cin>>starting_balance;
cout<<"Annual Interest Rate Promised ";
cin>>annual_interest_rate;
cout<<"Number Of Months ";
cin>>months_no;
for(int i=1;i<=months_no;i++){
cout<<"The Amount Deposited ";
cin>>amount_deposited;
while(amount_deposited<0){
    cout<<"The Amount Deposited can't be Negative ";
    cin>>amount_deposited;
}
balance=starting_balance+amount_deposited;
cout<<"The Amount Withdrawn ";
cin>>amount_withdrawn;
while(amount_withdrawn<0){
    cout<<"The Amount Deposited can't be Negative ";
    cin>>amount_withdrawn;
}

balance=balance-amount_withdrawn;
if(balance<=0){
	cout<<"Your Account Is Empty ";
    cout<<"Account Closed ";
    return 0;
}
monthly_interest_rate=annual_interest_rate/12;
monthly_interest=balance*monthly_interest_rate;
balance+=monthly_interest;
total_deposits+=amount_deposited;
total_interest+=monthly_interest;
total_withdraw+=amount_withdrawn;
}
cout<<"Total Balance "<<balance<<endl;
cout<<"Total Deposits "<<total_deposits<<endl;
cout<<"Total Withdraws "<<total_withdraw<<endl;
cout<<"Total Interest "<<total_interest<<endl;
}
