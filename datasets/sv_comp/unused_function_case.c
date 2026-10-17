#include <stdio.h>

int func(int x, int y){
    return x + y;
}

int main(){
    int a = 10, b = 5;
    int sum = func(a, b);
    return 0;
}