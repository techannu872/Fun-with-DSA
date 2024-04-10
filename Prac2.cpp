//To determine whether the input no. is positive or negative
#include<iostream>
using namespace std;

int main (){
    float a; 
    cout<<"Bro apne hisab se number daalo : ";
    cin>>a;

    if(a>0){
        cout<<"A zero se bada hai isliye A positive Hai"<<endl;
    }
    if(a<0){
        cout<<"A zero se kam hone ke karan woh negative hai"<<endl;
    }
    else{
        cout<<"A zero ke barabar isliye woh na toh negative hai aur nahi positive hai"<<endl;
    }


}