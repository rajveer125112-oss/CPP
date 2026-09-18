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

    //String 

    string j;
    cout<<"Enter Your name =";
    cin.ignore();                     //cin has a major problem it rejects everything after white space so we use getline to avoid that
    getline(cin,j);

    //Outputs
    cout<<"Age "<<a<<endl; 
    cout<<"Height (cm) "<<h<<endl; 
    cout<<"First Initial "<<f<<endl;
    cout<<"My name is ="<<j<<endl;

    //Const And Constexpr

    //Const can be set by input once , but constexpr value has to be set before running the program
    float q;
    //Mistake: dont write "const float pi = q;" here as pi will become q that is nothing but emptiness in memory from line 35
    //If you write the line here pi will store garbage data ,so first assign a value to q and then assign q to pi.....
    cout<<"Enter the value of pi till desired ="<<endl; cin>>q;
    const float pi = q;
    cout<<"The value of pi entered is ="<<q<<endl;

    constexpr float pi1 = 3.14;

    cout<<"Area of circle of radius 2 units using pi ="<<pi*2*2<<endl;
    cout<<"Area of circle of radius 2 units using pi1 ="<<pi1*2*2<<endl;
    
    


}