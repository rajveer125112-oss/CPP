#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<map>
using namespace std;



int main(){
    


//for loops:

    //Print all even numbers from n down to 2.

    int n;
    cout<<"Enter the value up to which you have to obtain even numbers"<<endl;
    cin>>n;
    for(int i=n ;i>=2;i--){
        if (i%2==0){
            cout<<i<<endl;
        }
    }

    //Print the sum of squares from 1 to n.

    int n1;
    cout<<"Enter the value up to which you want sum of square ="; cin>>n1;
    int j=0;
    for(int i=0;i<=n1;i++){
        j=j+pow(i,2);
    }
    cout<<"The sum of squares upto n1 is "<<j<<endl;

    //Factorial
    
    int n2,f=1;
    cout<<"Enter the value for which you want it's factorial ="; cin>>n2;
    for(int i=2;i<=n2;i++)f=f*i;
    cout<<"Factorial of n2 is ="<<f<<endl;

    //Vowel Counter

    string n3,t1,t2;
    int m1,m2,count=0;

    cout<<"Enter the word from which you have to calculate vowels ="; cin>>n3;
    //aeiou 

    t1="aeiou";
    

    m1=n3.length();
    m2=t1.length();
    for(int i=0;i<m1;i++){
        for(int j=0;j<m2;j++){
            if(t1[j]==n3[i]){
                count=count+1;
            }
            
        
        }
       
    }
cout<<count;

    //Sum of digits of a number

    int n4;
    cout<<"Enter the value of which sum of digits is to be calculated ="; cin>>n4;
    int sum=0;
    while(n4>0){
        sum=sum+n4%10;
        n4=n4/10;
    }
    cout<<sum;

    //Collatz Sequence

    int n5,steps=0;
    cout<<"Enter the number for collatz sequence ="; cin>>n5;
    while(n5!=1){
        n5=(n5%2==0)?n5/2:3*n5+1;
        cout<<" "<<n5;
        steps++;
    }
    cout<<"\nSteps ="<<steps;

    //Number reader

    int n6,count_p=0,count_n=0;
    while(n6!=0){
        cout<<"Enter the number ="<<endl; cin>>n6;
    
        if(n6>0){
            count_p=count_p+1;
        }
        else if(n6<00){
            count_n=count_n+1;
        }
    }

    cout<<"Positive ="<<count_p<<endl;
    cout<<"Negative ="<<count_n<<endl;

    //Count digits 

    int n7,count3=0;
    cout<<"Enter the value ="; cin>>n7;
    do{
        count3=count3+1;
        n7=n7/10;
    }while(n7>0);

    cout<<count3;

    //Number guesser

    int n8,secret,count_attempt=0;
    secret=8;
    
    do{
        cout<<"Enter the number ="; cin>>n8;
        count_attempt+=1;
    }while(n8!=secret);
    cout<<"\nNumber of attempts ="<<count_attempt;


    // sum and max
    int count4=0, mx=INT_MIN;
    vector<int>v={3,8,1,9,4};
    for(int x:v){
        count4=count4+x;
        mx=max(mx,x);
    }
    cout<<"Sum of all digits ="<<count4;
    cout<<"\nMax of all digits ="<<mx;

    // Double every element

    vector<int>v1={2,4,6};
    for(int x:v1){
        cout<<pow(x,2)<<" ";
    }

    // Char counter in string

    string s;
    cout<<"Enter the string ="; cin>>s;
    map<char,int> freq;
    for (char c:s) freq[c]++;
    for (auto &p : freq)
        cout << p.first << ": " << p.second << "\n" ;
    //Patterns

    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            cout<<i*j<<" ";
        }
        cout<<"\n";
    }
}