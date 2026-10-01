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
}
    
