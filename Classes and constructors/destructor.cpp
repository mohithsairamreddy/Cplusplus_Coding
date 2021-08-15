#include<iostream>
using namespace std;

class student{
    string name;
    public:
    int age ;
    string gender;

    student(){
        cout<<"Default Constructor"<<endl;
    }//Default Constructor//

    student(string s,int a,string g){
        cout<<"Parameterized Constructor"<<endl;
        name=s;
        age=a;
        gender=g;
    }// parameterised constructor//

    student(student &a){
        cout<<"Copy Constructor"<<endl;
        name=a.name;
        age=a.age;
        gender=a.gender;
    }

    ~student(){
        cout<<"Destructor called"<<endl;
    }

    //setter Function//
    void setname(string s){
        name=s;
    }

    //getter Function//
    void getname(string s){
        cout<<name;
    }

    void printinfo(){
        cout<<"Name= ";
        cout<<name<<endl;
        cout<<"Age= ";
        cout<<age<<endl;
        cout<<"Gender= ";
        cout<<gender<<endl;
    }
};


int main(){
    /*student arr[3];
    for(int i=0;i<3;i++){
        string s;
        cout<<"Name= ";
        cin>>s;
        arr[i].getname(s);
        cout<<"Age= ";
        cin>>arr[i].age;
        cout<<"Gender(M or F)= ";
        cin>>arr[i].gender;
    }
    for(int i=0;i<3;i++){
        arr[i].printinfo();
    }*/

    student a("Mohith",18,"M");
    //a.printinfo();//
    student b;
    student c=a;

    return 0;
}