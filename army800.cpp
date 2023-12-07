#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n-1];
for (int i=0; i<n-1;i++){

    cin>>arr[i];
}

int a,b;
cin>>a>>b;
int c = b-a;
int sum =0;
for (int d=a-1;d<b-1;d++){
sum += arr[d];

}
cout<<sum;

    return 0;
}
