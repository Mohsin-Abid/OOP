#include<iostream>
using namespace std;
int main(){
	int counter;
	double gallon;
	double average;
	double mile;
	double milegallon;
	counter=0;
	cout<<"Enter gallon used in tank"<<endl;
	cin>>gallon;
	counter++;
	while(gallon != -1){
	cout<<"Please enter distance in miles"<<endl;
	cin>>mile;
	milegallon=mile/gallon;
	cout<<"Mile per gallon is"<<milegallon<<endl;
	average=milegallon / counter;
	cout<<"Overall averge was"<<average<<endl;
	}
}
