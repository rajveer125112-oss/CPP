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

//Default arguements:

int power(int base, int exp=2){
    int result = 1;
    for(int i =0; i<exp ;i++){
        result=result*base;
    }
    return result;
}

int main() {

    // Pass by value:
    int a=5;
    increment(a);       // prints 6 (copy was incremented)  
    cout<<"\n"<<a;      // prints 5 (original is unchanged)

    //Pass by reference:
    increment1(a);      // a becomes 6 (original modified through the reference)
    cout<<"\n"<<a;      // prints 6

    //Pass by pointer:
    increment2(&a);       // valid address, a becomes 6
    cout<<"\n"<<a;
    increment2(nullptr);  // x is null, the if skips it, no crash

    //Default Arguements:
    cout<<power(3)<<endl;
    cout<<power(3,3);

}