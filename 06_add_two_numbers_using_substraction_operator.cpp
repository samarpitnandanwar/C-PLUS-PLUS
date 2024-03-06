// C++ program to add two number using subtraction operator

#include <iostream>
using namespace std;

int add(int x, int y){
    return x - (-y);
}

int main(){
    int a = 5, b=8;

    cout<<"sum is "<< add(a,b);
    return 0;
}