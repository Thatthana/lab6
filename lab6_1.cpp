#include<iostream>
using namespace std;

int main(){
    int num, odd=0, even=0, count=-1;
     do{
        cout << "Enter an integer: ";
        cin >> num;
    
        if (num==0){
        }else if(num%2==0){
            even++;
        }else{
            odd++;
        }
            count++;
    }
        while(num!=0);
        if (count==0){
        cout << "#Even numbers = 0" << endl;
        cout << "#Odd numbers = 0";
        }else{
            cout << "#Even numbers = " << even << endl;
            cout << "#Odd numbers = " << odd;
        }
        return 0;
}
