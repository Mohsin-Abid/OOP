#include<iostream>
#include<string>
using namespace std;

class HeartRates{
private:
    string firstname;
    string lastname;
    int day,month,year,Age,maxh;
    float fifty,eighty;
public:
    HeartRates(string fname,string lname,int d,int m,int y){
        firstname=fname;
        lastname=lname;
        day=d;
        month=m;
        year=y;
        getfirstname();
        getlastname();
        age();
        maxheartrate();
        targetheartrate();
    }
    void getfirstname(){
        cout<<"Your First Name is:"<<firstname<<"\n";
    }
    void getlastname(){
        cout<<"Your Second Name is:"<<lastname<<"\n";
    }
    void getDOB(){
        cout<<"Your Date of Birth is:"<<day<<"//"<<month<<"//"<<year<<"\n";
    }
    void setfirstname(string a){
        firstname=a;
    }
    void setlastname(string a){
        lastname=a;
    }
    void setdob(int d,int m,int y){
        day=d;
        month=m;
        year=y;
    }
    void age(){
        Age=2019-year;
        cout<<"Age in Years="<<Age<<"\n";
    }
    void maxheartrate(){
        maxh=220-Age;
        cout<<"Maximum HeartRate is: "<<maxh<<"\n";
    }
    void targetheartrate(){
        fifty=maxh*.5;
        eighty=maxh*.8;
        cout<<"Your Target HeartRate is 50%-80%: "<<fifty<<" to "<<eighty<<"\n";
    }
    
};
int main()
{
    HeartRates hr("Ahsan","Mohsin",12,5,1999);
    hr.setfirstname("WIDI");
    hr.getfirstname();
    return 0;
}
