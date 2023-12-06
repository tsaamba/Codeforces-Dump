#include <iostream>
using namespace std;
int main(){
/*
 red pair of socks = a
total red socks = 2*a


blue pair of socks = b
total blue socks = 2*b


if a>b
 then acc to fashion socks wear can be for b days
and rest sock of same kind thhat can be wore will be 
divisor((a-b)/2)


if b>a
 then acc to fashion socks wear can be for a days
and rest sock of same kind thhat can be wore will be 
divisor((b-a)/2)
*/


int a,b;
    cin>>a>>b;


if (a>b)
{
        int c = (a-b)/2;
             cout<<b << " "<< c;
}
else if(a==b){

    cout<<a<<" "<< 0;

}

else if (a<b){
int d = (b-a)/2;


    cout << a<<" "<< d;
}

    return 0;
}