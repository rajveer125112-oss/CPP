#include<iostream>
#include<string>
using namespace std;

// class Dog {
// public:
//     void bark() {                // declaration + body together
//         cout << "Woof!" << endl;
//     }
// };

//Example of scope resolution
class Dog {
public:
    void bark();                 // declaration only, no body
};

void Dog::bark() {               // body written outside
    cout << "Woof!" << endl;
}

class Dog1{
    public:
        void bark(){
            cout<<"Woof"<<endl;
        }
};


int main(){

    //Only included unknown C++ Operators and traps 


    //Arithmetic Traps

    cout<<5/2<<endl; //2 int stays int , 2.5 is truncated to 2
    cout<<(float(5))/2<<endl; //Soln
    cout<<-7/2<<endl;   //truncates it to -3 where as python rounds off to least value -4
    cout<<-7/3<<endl;   //truncates -2.33 to -2 hence we get -1 but python rounds of it to -3 and we get -2 
   
//------------------------------------------------------------------------------------------------------------

    //Relational: No chaining

    //if(1<x<10)---Compiles but no output ERROR
    //and -- &&
    //or -- ||

    //The correct way
    int x;
    cout<<"Enter the value of x ="<<endl; cin>>x;
    if (1<x && x<10){
        cout<<"x is between 1 and 10"<<endl;
    }

    else{
        cout<<"x is out of range "<<endl;
    }

//------------------------------------------------------------------------------------------------------------

    //Ternary operator

    int a,b;
    a=10,b=1;
    int m = (b<a)?b:a;  //if (b<a) then m=b else m=a

    cout<<m<<endl;

//------------------------------------------------------------------------------------------------------------

    //Increment/Decrement i++/++i/i--

    //i++

    int i=0;
    cout<<i++<<endl;  //print zero as it uses the value first and then adds it has to remember the last value hence using memory
    cout<<i<<endl;    //i becomes 1 for both cases

    //++i

    int j=1;
    cout<<++j<<endl;  //prints 2 because it first adds and then gives new value
    cout<<j<<endl;    //print 2
    
    //same for decrement but it subtracts

//------------------------------------------------------------------------------------------------------------

    //Address Operator & and dereference operator *

    int n=5;
    int *p=&n;      //& is address of m
    cout<<*p<<endl; //Value at that address
    *p=20;          //We can change the value of n
    cout<<n<<endl;

//------------------------------------------------------------------------------------------------------------

    //Scope resolution  

    //The thing at right side lives inside thing in left side
    std::cout<<"Hello"<<endl;

    Dog d;
    d.bark();

//------------------------------------------------------------------------------------------------------------

    //Member Access 

    // . for object and -> for pointer

    Dog1 w;
    w.bark();   

    Dog1* q=&w;
    q->bark();  //same as *p.bark()

//-------------------------------------------------------------------------------------------------------------

    //Size of

    //Used to calculate size in bytes

    cout<<sizeof('A')<<endl;        //char is of 1 byte
    cout<<sizeof(213124124)<<endl;  //standard integer is of 4 bytes
    
//--------------------------------------------------------------------------------------------------------------

    //Precedence Trap

    int x1=0||1;
        cout<<"Enter the value of x1 ="<<endl;   cin>>x1;
        if ((x1&1)==0){
            cout<<"x1 is false\n";
        }
        else{
            cout<<"x1 is true\n";
        }
    //trap = if(x1&1==0) not valid we have to use if ((x1&1)==0)

//--------------------------------------------------------------------------------------------------------------
    
    //Associativity

    //Most operators go left to right: a - b - c is (a - b) - c.
    //Assignment, unary operators (!, *, &, ++x) and the ternary go right to left:

    int a1,b1,c1;
    a1=b1=c1=0;
    //here it goes right to left therefore c1 becomes 0 first
    int h,g,v,t;
    int k,m1;
    cout<<"enter the value of h =\n";
    cin>>h;
    cout<<"enter the value of g =\n";
    cin>>g;

    v=g>h; t=g<h;
    k=2026;

    m1=v?k:t?g:h;       //here grouping happens from right to left  m1=v?k:(t?g:h); if 'v' is true 'v' will execute else it will go to 't'
    cout<<m1<<endl;



    

}