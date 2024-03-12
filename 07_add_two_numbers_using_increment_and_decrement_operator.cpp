#include <iostream>
using namespace std;

int add(int x, int y){
    while(x>0){
        x--;
        y++;
    }

    while(x<0){
        x++;
        y--;
    }

    return y;
}

int main(){
    int a = 4, b=11;
    cout<<"sum = "<< add(a,b);
    return 0;
}