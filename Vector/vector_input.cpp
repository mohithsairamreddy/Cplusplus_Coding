#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v2(3,50);

    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<endl;
    }

    return 0;
}