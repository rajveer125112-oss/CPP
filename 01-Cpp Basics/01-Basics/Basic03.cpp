#include<iostream>
#include<string>            //Used for strings
using namespace std;
int main(){

    int a;
    double h;
    char f;
    
    cout<<"Enter Your Age ="<<endl;
    cin>>a;
    cout<<"Enter Your Height (cm) ="<<endl;
    cin>>h;
    cout<<"Enter First Initial of your name ="<<endl;
    cin>>f;

    string j;
    cout<<"Enter Your name =";
    cin.ignore();                     //cin has a major problem it rejects everything after white space so we use getline to avoid that
    getline(cin,j);
    cout<<"Age "<<a<<endl; 
    cout<<"Height (cm) "<<h<<endl; 
    cout<<"First Initial "<<f<<endl;
    cout<<"My name is ="<<j;


}