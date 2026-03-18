#include <iostream>
using namespace std;

int main(){
    for (int i=1;i<=15;i++){
        if (i%3==0 && i%5==0){
            cout<<"Z";
        }
        else if (i%3==0){
            cout<<"X";
        }
        else if (i%5==0){
            cout<<"Y";
        }
        else {
            cout<<i;
        }
    }
}