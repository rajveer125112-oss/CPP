//Literals


#include<iostream>
using namespace std;

int main(){


    //Integer Literals
    
    int dec = 42;          // decimal
    int oct = 052;         // octal (leading 0) = 42
    int hex = 0x2A;        // hexadecimal (0x)  = 42
    int bin = 0b101010;    // binary (C++14)    = 42
    
    long a           = 100L;    // long
    unsigned int b   = 100u;    // unsigned
    long long c      = 100LL;   // long long
    unsigned long long d = 100ULL;
    
    long long big = 9'000'000'000LL;  // ' digit separator (C++14)

    //Float literals

    double d1       = 3.14;       // double
    float f        = 3.14f;      // float (f suffix)
    long double ld = 3.14L;      // long double (L suffix)

    double sci1 = 1.5e3;         // 1.5 × 10³  = 1500
    double sci2 = 2.5E-4;        // 2.5 × 10⁻⁴ = 0.00025

    //char literals

    char c1 = 'A';
    char c2 = '\n';       // escape sequence: newline
    char c3 = '\t';       // tab
    char c4 = '\\';       // backslash
    char c5 = '\'';       // single quote
    char c6 = '\x41';     // hex escape  -> 'A'
    char c7 = '\101';     // octal escape -> 'A'

    wchar_t  w  = L'Ω';   // wide char
    char16_t c8 = u'A';   // UTF-16
    char32_t c9 = U'A';   // UTF-32

    cout << 'A' + 1<<endl;     // 66, because 'A' is 65 and the result is int

    //boolean literals

    bool isReady = true;
    bool isDone  = false;

    cout << isReady<<endl;                       // 1
    cout << boolalpha << isReady<<endl;     // true

    int x1 = true + true;                        // 2 (true converts to 1)
    cout<<x1<<endl;

    //Null ptr  (Important)

    int x;
    int* p=nullptr;                         //Pointer pointing towards nothing
    cout<<"Enter value of x ="; cin>>x;     //Enter the value to find it's memory address
    p=&x;                                   //Now nullptr is filled now we can show memory address of x.
    cout<<"Memory address of x is ="<<p<<endl;
    cout<<"Value of x is ="<<*p<<endl;

    return 0;
}
