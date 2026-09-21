//Conditional statements

#include<iostream>
#include<string>
using namespace std;

int main(){

    //Normal Calc using Conditional Statements

    float a ,b;
    string op;
    cout<<"Enter the value a =\n"; cin>>a;
    cout<<"Enter the value b =\n"; cin>>b;
    cout<<"Select operation (Add/Sub/Prod/Div) =\n"; cin>>op;

    if (op=="Add"){
        cout<<"Addition of a and b is = \n"<<a+b;
    }
    else if (op=="Sub"){
        cout<<"Subtraction of a and b is = \n"<<a-b;
    }
    else if (op=="Prod"){
        cout<<"Product of a and b is = \n"<<a*b;
    }
    else if (op=="Div"){
        cout<<"Division of a and b is = \n"<<a/b;
    }
    else{
        cout<<"Incorrect operation input \n";
    }

    //Flight Booking System
    //System needs to determine whether customer is eligible for premium discount or not

    string st,date;
    float dist,ydist;
    cout<<"Enter the Status (Gold/Platinum/Normal) = \n"; cin>>st;
    cout<<"Enter the Distance you are going to travel = \n"; cin>>dist;
    cout<<"Enter the Travel Date (Normal/Peak-Holiday)= \n"; cin>>date;
    cout<<"Enter the Distance you have travelled in an year = \n"; cin>>ydist;

    if ((st=="Gold" && dist>5000) || st=="Platiinum"){
        if (st=="Platinum" && date!="Peak-Holiday"){
            cout<<"Discount Granted\n";
        }
        else if (st=="Gold" && date=="Peak-Holiday" && ydist>=10000){
            cout<<"Discount Granted\n";
        }
        else if (st=="Gold" && date!="Peak-Holiday"){
            cout<<"Discount Granted\n";
        }
        else{
        cout<<"Discount not granted\n";
        }   

    }
    else{
        cout<<"Discount not granted\n";
    }

    //switch

    int n = 2;
    switch(n){
        case 1 :
        cout<<"one\n";
        break;
        case 2 :
        cout<<"two\n";
        break;
        case 3:
        cout<<"three\n";
        break;
    }

    char ch = 'f';
    switch (ch) {
    case 'a':
    break;
    case 'e':
    break;
    case 'i':
    break;
    case 'o':
    break;
    case 'u':
    break;
        cout << "Vowel\n";
        break;
    default:                        //is used when all cases are neglected this case is used
        cout << "Consonant\n";
}
}