#include <iostream>

using namespace std;
int main(){
    int n;
    cin>> n;
    int x = n/10;
    int y = n%10;
    if(y==0){
        
        cout<<"YES";
        
    }
    else if(x%y==0 || y%x== 0){
        
        cout<< "YES";
    }
    
    else{
        
        cout<<"NO";
    }
    return 0;
}
