#include <iostream>
using namespace std;
int main(){
    /*
    soldier wants to buy banana = w
cost of firdst banana = k
cost of ith banana = ik
total cost of the banana is = 1*k + 2*k + .... + w*k
				    = w(w+1)*k/2 = total
money the soldier have is = n
money borrowed from friend = n - total = x


ans is x 

*/
int k,n,w;
cin>> k>> n>> w;
int total = w*k*(w+1)/2;
int x = total - n;
if(total>n){
cout<<x;    
}
else 
{

    cout<< 0;
}
    return 0;
}
