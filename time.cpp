//PRIME NUMBER OF TWO TYPES WITH RESPECT TO DIFFERENT TIME COMPLEXITITES:

//CODE 1:

#include<bits/stdc++.h>
using namespace std;
int main()  {
int n; 
cin>>n;   
if(n<=1)
{ cout<<"not prime";
} else
{
bool p = true;
for(int i=2;i<=sqrt(n);i++) {       //time complexity = O(sqrt(n))
if(n%i==0) 
{
p=false;
}
if(p==true) {
cout<<"prime"; 
} else {
cout<<"not prime";
}
}
} 
}  



//CODE 2:
  
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if(n<2)
    return false;
    else {
        for(int i=2;i<n;i++)        //time complexity = O(n)
        {
            if(n%i==0)
            return false;   }
    return true;
}
}

int main()
{
int num;
cin>>num;

     if(isPrime(num)==true)
     {
         cout<<"is prime";
     } else {
         cout<<"not prime";
     }
}
//for(int i=2;i<n;i++)     time complexity is O(n).





//GCD
//CODE:1 (WITHOUT OPTIMIZATION)

#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int min=0;
    if(x>y) {
        min=y;
    } else {
        min=x;
        
    }
    for(int i=min;i>=1;i--) 
    {
        if(x%i==0 && y%i==0) {
            cout<<"GCD is"<<" "<<i;
        
        break;
    }
    }
}


//CODE:2 //WITH OPTIMIZATION OF TIME COMPLEXITY
//EUCLIDEAN'S THEOREM
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    while(x!=0 && y!=0) {
        if(x>y) {
            x=x%y;
        } else {
            y=y%x;
        }  
        
    }
    cout<<max(x,y);
}


//GCD AND LCM:
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int a=x,b=y;
    while(x!=0 && y!=0) {
        if(x>y) {
            x=x%y;
        } else {
            y=y%x;
        }  
        
    }
    cout<<"GCD:"<<" "<<max(x,y)<<endl;
    if(x!=0) {
    	cout<<"LCM:"<<" "<<(a*b)/x;
	} else {
		cout<<"LCM:"<<" "<<(a*b)/y;
	}
}
