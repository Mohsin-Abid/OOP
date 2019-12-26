#include<iostream>
using namespace std;
reverse(int a){
	intreverseNum=0;
	while(a>0){
		reverseNum+=(a%10);
		reverseNum*=10;
		a/=10;
	}
	reverseNum/=10;
	while(reverseNum!=0){
		cout<<reverseNum%10<<"\n";
		reverseNum/=10;
	}
}
int main(){
	intnum;
	cout<<"Enter number:";
	cin>>num;
	reverse(num);
}

