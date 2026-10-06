#include<iostream>

using namespace std;



// Pass by value: the function receives a COPY of the argument.
// Changes to x stay inside the function; the caller's variable is untouched.
void increment(int x){
    x++;
    cout<<x;    // prints the modified copy
}
int main() {


    int a=5;
    increment(a);       // prints 6 (copy was incremented)
    cout<<"\n"<<a;      // prints 5 (original is unchanged)
  



}