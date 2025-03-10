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
