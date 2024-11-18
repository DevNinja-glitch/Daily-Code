#include<iostream>
using namespace std;
int main(){
	int numbers;
	int smallest=0;
	int largest=0;
	while(numbers!=-99){
		cout<<"Enter the Numbers ";
	    cin>>numbers;
	    if(numbers==-99){
	    		cout<<"The Largest Number is "<<largest<<endl;
              	cout<<"The Smallest Number is "<<smallest<<endl;
			cout<<"The Program Ends "<<endl;
			return 0;
		}
		if(numbers<smallest){
			smallest=numbers;
		}
		if(numbers>largest){
			largest=numbers;
		}
	}
	cout<<"The Largest Number is "<<largest<<endl;
	cout<<"The Smallest Number is "<<smallest<<endl;
}
