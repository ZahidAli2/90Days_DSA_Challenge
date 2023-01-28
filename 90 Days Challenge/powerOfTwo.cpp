#include <iostream>
using namespace std;

//Here two function both are Working  same but One is fast And the Other One  is SLow.

//For fast Exponention
int fastExp(int n){
    
    //base case
    if(n==0){
        return 1;
     }
    int Chota_answer=fastExp(n/2);
    
    //If number is odd
    if(n&1){
        return 2*Chota_answer*Chota_answer;
    }
    else{
        return Chota_answer*Chota_answer;
    }
}


//Calculate the Power of Two but its SLow


int powerOfTwo(int n){

//Base call
    if(n==0){
        return 1;
    }
   
    int ans=2* powerOfTwo(n-1);
    return ans;
}
int main(){
    int n;
    cin>>n;
    //call function 1
    int ans= powerOfTwo(n);
    //call function 2
    int ansTwo=fastExp(n);
    cout<<"Function 1 -->  "<<ans<<endl;
    cout<<"Function 2 -->  "<<ansTwo;
}