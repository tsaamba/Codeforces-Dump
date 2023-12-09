#include <iostream>
using namespace std;
int main(){
  /*
    Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".

For example: In 4569 the first digit is 4, the second digit is 5, the third digit is 6 and the fourth digit is 9.
  */
int x;
cin>> x;
int y = x/1000;
if(y%2==0){

    cout<<"EVEN";

}
else{

    cout<<"ODD";
}

    return 0;
}
