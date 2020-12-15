#include<iostream>
using namespace std;

int main(){
    int integer=1,Even=0,Odd=0;
    while(integer!=0){
    cout << "Enter an integer: ";
    cin >> integer;
        if(integer%2==0){
            Even++;
        }else{
            Odd++;
        }
    }
    cout << "#Even numbers = " << Even-1 << endl;
    cout << "#Odd numbers = " << Odd;
    return 0;
}
