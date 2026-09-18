#include<iostream>                 
using namespace std;

int main()
{
    short s=32000;  //Short integer usually 2 bytes ,range roughly -32,768 to 32,767
    cout<<s<<endl;    

    int a = 100000; //Standard integer with size 4 bytes
    cout << a<<endl;

    long b = 100000000;    //Large integer usually of size 4 bytes but in 64 bit linux 8 bytes
    cout<<b<<endl;

    long long c=10000000000;  //Larger integer atleast of size 8 bytes 
    cout<<c<<endl;

    float d=3.1457;     //Represents decimal numbers precision upto 6-7 decimal digits (4 Bytes)
    cout<<d<<endl;

    double e=8.1462812939;  //Precision upto 15-16 decimals precision (8 bytes)
    cout<<e<<endl;

    long double f=8.146281293923;  //size is more atleast 8 bytes
    cout<<f<<endl;
    
    //THE OUTPUT WILL SHOW ONLY 6DIGITS AS COUT IS SET TO DISPLAY ONLY TILL 6 DIGITS FOR FLOATS,
    //BUT IN MEMORY DATA IS STORED AS IT IS ENTERED...

    char u='h';
    cout<<u<<endl;          //char is used to store single characters only
    cout<<int(u)<<endl;     //prints ASCII code of 'h'
    
    bool j=true;            //1 byte boolean represents true (1) and false (0)
    cout<<j<<endl;

    void helloprinter();    //function that returns nothing/inputs nothing 
    {
        cout<<"Hello"<<endl;
    }
    
    //For Integers:

    signed int i=-903;          //Stores both negative and positive values and 0 for integer data types and char
    cout<<i<<endl;

    unsigned int k=902343;
    cout<<k<<endl;          //Stores only Positive Values and zero doubling range of positive values
    
    //We covered all soughts of data types, majorly we use int,float,double,char,string,bool and void...

}

