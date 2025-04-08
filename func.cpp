#include<iostream>
using namespace std;

int sumtwo(int a, int b){
    return a+b;
}
int main(){
    int x,y;
    cout<<"Creating a Function myself"<<endl;
    cout<<"Enter Your Numbers You Want To Add: "<<endl;
    cin>>x>>y;
    cout<<"The Sum Of Two Numbers You Entered Is: "<<sumtwo(x,y);
}