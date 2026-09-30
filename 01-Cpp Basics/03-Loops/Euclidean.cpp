#include<iostream>
#include<string>

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
    int n2;
    cout<<"Enter the value of n2 to reverse it ="; cin>>n2;
    while(n2>0){
        cout<<n2%10;
        n2=n2/10;
    }

    //Check Whether It's Palindrome or not
    string s,rev;
   
    cout<<"Enter the string to check it's palindrome ="; cin>>s;
    for(int i=0;i<s.length()/2;i++){
        if(s[i]!=s[s.length()-1-i]){
            cout<<"It's not a Palindrome";
            return 0;
        }

    }
    cout<<"It's a palindrome";
}
    
