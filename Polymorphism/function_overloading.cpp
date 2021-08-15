#include<iostream>
using namespace std;

//Function Overloading
class Myclass{
public:
    void function(){
        cout<<"I am function with no arguments"<<endl;
    }
    void function(int x){
        cout<<"I am function with int argument"<<endl;
    }
    void function(double x){
        cout<<"I am function with double argument"<<endl;
    }
    
};

int main(){
    Myclass obj;
    obj.function();
    obj.function(6);
    obj.function(3.02);
}