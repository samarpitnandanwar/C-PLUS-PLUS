#include<iostream>
using namespace std;

int addition(int x, int y){
    return x + y;
}

int main(){
    int a = 4;
    int b = 6;
    
    cout<< "sum = " << addition(a,b);
    return 0;
}