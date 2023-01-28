#include <iostream>
using namespace std;
//Function to Reverse a Number integer
void reverseNumber(int n){
    if(n==0){
        return;
    }
    //work
    cout<<n%10;
    //recursive call
    reverseNumber(n/10);
}
int main(){
   // Reverse a number with recursion
   int n;
   cin>>n;
   reverseNumber(n);
}