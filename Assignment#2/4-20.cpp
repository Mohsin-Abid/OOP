#include<iostream>
using namespace std;
int main(){
	int Pass=0,Fail=0,Students=1,result;
	while (Students<=10){
		cout<<"Enter the student result BSCS 5C(PASS=1 & FAIL=2):"<<endl;
	cin>>result;
	if(result==1){
		Pass++;
		Students++;
	}
	else if(result==2){
		Fail++;
		Students++;
	}
	else
	cout<<"invalid result:"<<endl;
	}
	cout<<"Passed:"<<Pass<<endl;
	cout<<"Failed:"<<Fail<<endl;
	if(Pass>=8){
		cout<<"CONGRAGULATION:"<<endl;
		cout<<"AWARD TO INSTRIUCTOR'$5000'"<<endl;
	}

