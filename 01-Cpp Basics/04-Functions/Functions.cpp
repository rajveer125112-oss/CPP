#include<iostream>

using namespace std;



// Pass by value: the function receives a COPY of the argument.
// Changes to x stay inside the function; the caller's variable is untouched.
void increment(int x){
    x++;
    cout<<x;    // prints the modified copy
}

// Pass by reference: x is an alias for the caller's variable, so no copy is made.
// Changes to x inside the function directly modify the original.

void increment1(int &x){
    x++;
}

//Pass by pointer 

void increment2(int *x){
    if (x) (*x)++;          // only touch *x if x points somewhere valid
}

//Function overloading: the function adjusts according to the input 

int add(int a, int b){return a+b;}
double add(double a, double b){return a+b;}
int add(int a, int b, int c){return a+b+c;}

//Default arguements:

int power(int base, int exp=2){
    int result = 1;
    for(int i =0; i<exp ;i++){
        result=result*base;
    }
    return result;

}

//Inline function : It asks the compiler to paste the function body directly where it’s called, so there is no jump.

inline int square(int x){
    return x*x;
}

//Recursive Functions: Using a function inside a function

int factorial(int x){
    if(x<=1){ 
        return 1;
    }
   
    return x*factorial(x-1);

}

//Static functions 

// file scope
static void helper() { cout << "only visible in this file\n"; }

// class scope
class MathUtil {
public:
    static int cube(int x) { return x * x * x; }
};


int main() {

//     // Pass by value:
//     int a=5;
//     increment(a);       // prints 6 (copy was incremented)  
//     cout<<"\n"<<a;      // prints 5 (original is unchanged)

//     //Pass by reference:
//     increment1(a);      // a becomes 6 (original modified through the reference)
//     cout<<"\n"<<a;      // prints 6

//     //Pass by pointer:
//     increment2(&a);       // valid address, a becomes 6
//     cout<<"\n"<<a;
//     increment2(nullptr);  // x is null, the if skips it, no crash

//     //Default Arguements:
//     cout<<power(3)<<endl;
//     cout<<power(3,3);

//     //Inline functions:
//     cout<<square(2);

//     //Function Overloading
//     cout<<add(2,3)<<endl;
//     cout<<add(3.5,2.0)<<endl;
//     cout<<add(2,3,4)<<endl;

//     //Recursive function
//     cout<<factorial(4);

    //Static Functions:
    helper();
    cout<<MathUtil::cube(3);
}