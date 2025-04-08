#include<iostream>
using namespace std;

int sumtwo(int a, int b){   //Takes Something   //Definition Of The Function
    // a & b are default arguments
    return a+b; //Returns Something
}
int main(){
    int x,y;
    cout<<"Creating a Function myself"<<endl;
    cout<<"Enter Your Numbers You Want To Add: "<<endl;
    cin>>x>>y;      //Actual Arguments
    cout<<"The Sum Of Two Numbers You Entered Is: "<<sumtwo(x,y);       //Calling Function
}