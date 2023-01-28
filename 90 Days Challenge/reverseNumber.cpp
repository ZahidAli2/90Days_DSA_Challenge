#include <iostream>
using namespace std;

void getNumber(int n,string arr[]){

    //base case
    if(n==0){
        return;
    }                  
        //***Important*** If we Write here work or Statement then its a Head of Recursive call In print in Reverse therefore,we write in Tail S

    //Recursive call
    getNumber(n/10,arr);
    
    //Work here Tail of Recursive Function
     int number= n%10;
     cout<<number;
    cout<<"  " <<arr[number];
     cout<<endl;
}

int main(){
    // Reverse a Number integer and Numbr a--------> 0 with a string Zero and -------->1 with String One And 
    // ---->2 with String Two in same order

    int n;
    cin>>n;
    string arr[10]= {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Night"};
    //Function call
    getNumber(n,arr);


}