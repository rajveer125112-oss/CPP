#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n to extract it's digits ="; cin>>n;
    while(n>0){
        cout<<n%10<<endl;
        n=n/10;
    }

    int n1,count=0;
    cout<<"Enter the value of n1 to count it's digits ="; cin>>n;
    while(n>0){
        n=n/10;
        count+=1;
    }
    cout<<count<<endl;

    int n2;
    cout<<"Enter the value of n2 to reverse it ="; cin>>n2;
    while(n2>0){
        cout<<n2%10;
        n2=n2/10;
    }

    
}