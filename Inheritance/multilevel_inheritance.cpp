#include<iostream>
using namespace std;

class A{
    public:
    void Afunct(){
        cout<<"Func A\n";
    }
};

class B: public A  {
    public:
    void Bfunct(){
        cout<<"Func B\n";
    }
};

class C: public B{
    public:
    void Cfunct(){
        cout<<"Func C\n";
    }
};

int main(){
    C c;
    c.Afunct();
    c.Bfunct();
    c.Cfunct();
}