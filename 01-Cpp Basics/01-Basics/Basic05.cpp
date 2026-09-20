//Type Casting


#include<iostream>

using namespace std;


//For dynamic_casting ,I already know oops in python that's why I can understand....

class Animal {
public:
    virtual void speak() {}   // needs at least one virtual function
};

class Dog : public Animal {
public:
    void bark() { 
    cout << "Woof!" << endl; 
    }
};

class Cat : public Animal {
public:
    void meow() {
     cout << "Meow!" << endl; 
    }
};

//Function for dynamic_cast
void Nice() {
    Animal* a = new Dog();    // an Animal pointer holding a Dog

    Dog* d = dynamic_cast<Dog*>(a);
    if (d) d->bark();                     // Woof!  (it really is a Dog)

    Cat* c = dynamic_cast<Cat*>(a);
    if (c == nullptr) cout << "Not a Cat" << endl;  // cast failed, safely

    delete a;
}       

//For const_cast:
  void printNum(int* p){
   cout<<*p<<endl;
  }

int main(){
    //Implicit-done automatically when we change type

    int x=4;
    float r=x;
    float d=x+2.5; // x convert to 4.0 for decimal addition
    cout<<d<<endl;

    //Explicit-where u tell the compiler to covert

    float pi=3.14;
    int m =static_cast<int>(pi);
    cout<<"Integer Value of pi is ="<<m<<endl;

    //Type promotion is when smaller data type is converted to higher data type so no data is lost.

    char r2='A';
    cout<<r2+33<<endl; //converted to int while operation with int

    //Narrowing Conversion 

    double a = 3.9;
    int i = a;
 
   cout<<i<<endl;            //truncated to 3 not rounded of to 4


   //C++ Type casting methods:

   //static_cast - normal conversion
   cout<<static_cast<float>(5)/2<<endl;

//-------------------------------------------------------------------------------------

   //dynamic_cast-Used in inheritance:

   //if we look only in nagpur we have 2 options but if we change address to
   //specific one where our goal is statisfied we can obtain the result that we want
    Nice();

//--------------------------------------------------------------------------------------

    //const_cast-Used to assign normal pointer to a const value

    //a const variable can be assigned only with "pointerto const" but if we have to assign
    //it with normal pointer we have to use const_cast
    //We need it as if a function accepts only normal pointer and we have input as "pointer 
    //to a const" we cant do that as it will show error ,so we have to use const_cast to 
    //convert the "pointer to const".
    //This is safe only if function reads the value and doesn't ,modify it.

    const int l=5;      
    const int *cp=&l;       //Pointer to const for const l 

    //printNum(cp)          //Error will be shown as printNum accepts only normal pointer

    printNum(const_cast<int*>(cp));

//---------------------------------------------------------------------------------------
    
    //reinterpret_cast

    //It is used to change the pointer type without changing memory address ,it lets you 
    //view same bytes as different type, for example reading int bytes as char..
    //As int has 4 bytes if we use this cast we can access all 4 bytes as char, but if we 
    //use char(a1) it will only consider the lowest memory thing. 
    //[44][43][42][41]-----> [D][C][B][A]   //Memory holds lowest byte first

    int a1= 0x41424344;                     //we use hexa decimal as each pair is of one byte making 4 bytes in total
    char *p= reinterpret_cast<char*>(&a1);  //we didn't use 65666768 as decimal digit don't line up with bytes, they don't become 4 separate bytes.

    for(int i=0;i<4;i++){
        cout<<p[i]<<endl;
    }

   
    

}

