#include<iostream>
using namespace std;
int main(){
	int floors=0,rooms=0,occupied=0,total_rooms=0,total_occupied=0;
	int left;
	cout<<"How many floors the Hotel has ? ";
	cin>>floors;
	if(floors>0){
	for(int i=1;i<=floors;i++){
		if(i==13){
			continue;
		}
		cout<<"Number of rooms the Floor "<<i<<" has ? ";
		cin>>rooms;
		cout<<"How many of them are Occupied ? ";
		cin>>occupied;
		if( rooms<10 || (occupied>rooms)){
			cout<"ERROR in Inputs ";
			return 0;
		}
		
		total_rooms+=rooms;
		total_occupied+=occupied;
	}
	left=total_rooms-total_occupied;
	cout<<"Rooms in Hotel "<<total_rooms<<endl;
	cout<<"Rooms Occupied "<<total_occupied<<endl;
	cout<<"Rooms Availabe "<<left;
}
}
