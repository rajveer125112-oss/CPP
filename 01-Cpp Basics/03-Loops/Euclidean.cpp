#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){

    //Extract Digits
    int n;
    cout<<"Enter the value of n to extract it's digits ="; cin>>n;
    while(n>0){
        cout<<n%10<<endl;
        n=n/10;
    }

    //Count Digitts
    int n1,count=0;
    cout<<"Enter the value of n1 to count it's digits ="; cin>>n;
    while(n>0){
        n=n/10;
        count+=1;
    }
    cout<<count<<endl;

    //Reverse Digits
    int n2,j,rev=0;
    cout<<"Enter the value of n2 to reverse it ="; cin>>n2;
    while(n2>0){
        j=n2%10;
        n2=n2/10;
        rev=rev*10+j;
    }
    cout<<rev;
    

    //Check Whether It's Palindrome or not
    string s;
   
    cout<<"Enter the string to check it's palindrome ="; cin>>s;
    for(int i=0;i<s.length()/2;i++){
        if(s[i]!=s[s.length()-1-i]){
            cout<<"It's not a Palindrome";
            return 0;
        }

    }
    cout<<"It's a palindrome";


     //Check Palindrome for a number
     int n3,j1,rev1=0;
     cout<<"Enter the value of n3 to check whether it's a Palindrome or not ="; cin>>n3;
     int orignal=n3;
     while(n3>0){
         j1=n3%10;
         n3=n3/10;
         rev1=rev1*10+j1;
     }
     if(rev1==orignal){
        cout<<"It's a palindrome";
     }
     else{
        cout<<"It's not a palindrome";
     }

     //Armstrong Number

     int n4,count4=0,check=0,j4;
     cout<<"Enter the value to check whether it's armstrong number or not ="; cin>>n4;
     int original=n4;
     int m4=n4;
     while(n4>0){
        count4=count4+1;
        n4=n4/10;
     }
    while(m4>0){
        j4=m4%10;
        check=check+pow(j4,count4);
        m4=m4/10;
     }
     if (check==original){
        cout<<"It's an armstrong number";
     }
     else{
        cout<<"It's not an armstrong number";
     }

     //Print all the divisors

     int n5;
     cout<<"Enter the value to print it's all divisors ="; cin>>n5;
     cout<<"The Divisors of "<<n5<<" are"<<endl;
     for(int i=1;i<=sqrt(n5);i++){
        if(n5%i==0){
            cout<<i<<endl;
            if((n5/i)!=i){
                cout<<n5/i<<endl;
            }
        }
     }

    //Prime check

    int n6,count6=0;
    cout<<"Enter the value of n6 ="; cin>>n6;
    for(int i=1 ; i*i<=(n6) ; i++){
        if(n6%i==0){
            count6++;
            if((n6/i)!=i){
                count6++;
            }
        }

    }
    if (count6==2){
        cout<<"It's a prime number ";
    }
    else{
        cout<<"It's not a prime number";
    }

    //HCF calculator for 2 numbers (Upward method) {more efficient if number is prime}

    int n7,n8,hcf;
    cout<<"Enter the value of number 1 ="; cin>>n7;
    cout<<"Enter the value of number 2 ="; cin>>n8;
    for(int i=1;i<=min(n7,n8);i++){
        if(n7%i==0 && n8%i==0){
            hcf=i;
        }
    }
    cout<<"HCF of the two numbers is = "<<hcf; 

    //HCF calculator for 2 numbers (Downward method method) {more efficient if number isn't prime}

    int n7,n8,hcf;
    cout<<"Enter the value of number 1 ="; cin>>n7;
    cout<<"Enter the value of number 2 ="; cin>>n8;
    for(int i=min(n7,n8);i>=1;i--){
        if(n7%i==0 && n8%i==0){
            hcf=i;
            break;
        }
    }
    cout<<"HCF of the two numbers is = "<<hcf; 

    
}