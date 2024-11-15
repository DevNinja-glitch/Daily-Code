#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	int choice=0;
	double result=0;
srand(time(0));
int num1=rand()%900+100;
int num2=rand()%900+100;
cout<<"         Math Tutoring System \n";
cout<<"1. Addition \n 2.Subtraction \n 3.Multiplication \n 4. Division \n 5. Exit\n";

while(true){
cout<<" Enter Your Choice ";
cin>>choice;
if(choice>0 && choice<6 ){

    switch(choice){
    	case 1:
    		cout<<" "<<num1<<"\n + "<<num2<<endl;
    		result=num1+num2;
    		cin.ignore();
    			cin.get();
			cout<<result<<endl;
    	
    	  break;
    	case 2:
    		cout<<" "<<num1<<"\n - "<<num2<<endl;
    		result=num1-num2;
				cin.get();cout<<result<<endl;
    	
    	break;
    	case 3:
    		cout<<" "<<num1<<"\n * "<<num2<<endl;
    		result=num1*num2;
    			cin.get();
			cout<<result<<endl;
    	break;
    	case 4:
    		cout<<" "<<num1<<"\n / "<<num2<<endl;
    		
    		result=num1/num2;
    			cin.get();
			cout<<result<<endl;
    	break;
    	case 5:
    	    cout<<"Exiting the Program";
			return 0;
	}
}
}
}

