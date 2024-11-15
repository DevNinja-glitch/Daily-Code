#include<iostream>
using namespace std;
int main(){
double start_no,days_no,increase_percent;
cout<<"Starting Number of organisms ";
cin>>start_no;
while(start_no<2){
	cout<<"Input Error Validation "<<endl;
	cout<<"Enter Start No Greater than 1 ";
	cin>>start_no;
}
cout<<"Number of Days the organisms multiply ";
cin>>days_no;
while(days_no<1){
	cout<<"Input Error Validation "<<endl;
	cout<<"Enter Number Of Days More than 1 ";
	cin>>days_no;
}
cout<<"Increasing Percentage Per Day ";
cin>>increase_percent;
while(increase_percent<0){
	cout<<"Input Error Validation "<<endl;
	cout<<"Average Daily Population Can't be Negative ";
	cin>>increase_percent;
}
increase_percent/=100;
double population_size=start_no,increase=0;
for(int x=1;x<=days_no;x++){
	increase=population_size*increase_percent;
	population_size+=increase;
	cout<<"Population For Day "<<x<<" is "<<population_size<<endl;
}
}





