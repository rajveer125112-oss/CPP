#include<iostream>                  //This is PreProcessor
#define pi 3.14                     //This preprocessor searches for pi variable and replaces it with 3.14
using namespace std;

int main()
{
    float r;                    //Variables along with it's data type has to be defined
    cout<<"Hello world"<<endl;
    cout<<"This is cpp for rev"<<endl;
    cout<<"the area of circle with radius 3 is "<<pi*3*3;   //We can write what we have to get for output in the end like this
    cout<<"Enter the value of radius = ";                   //output
    cin>>r;                                                 //input
    cout<<"The area of circle with radius r is ="<<pi*r*r;
}

//Here we discused basic program structure in cpp I/O and variables