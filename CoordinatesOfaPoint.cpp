#include <iostream>
using namespace std;
int main(){
float x,y;
cin>> x>> y;
/*
1)	If in q1 – both number should be positive
2)	If in q2 – first one is negative second will be postive
3)	If in q3 – both negative
4)	If in q4 – first  positive second negative
5)	If on origin – cout
6)	If on x axis – cout
7)	If on y axis - cout
Since value of x and y range (-1000 to  1000) we will use float



*/
if(x>0 && y>0){
    cout<<"Q1";
}
else if(x<0 && y>0){
    cout<<"Q2";

}
else if(x<0 && y<0){
    cout<<"Q3";

}
else if (x>0 && y<0){

    cout<<"Q4";

}
else if (x==0 && y==0){
    cout<<"Origem";
}
else if(y==0){
    cout<<"Eixo X";

}
else if(x==0){

    cout<<"Eixo Y";
}
    return 0;
}
