#include<stdio.h>
int main() {
    int a = -30, b=10, c=20;
    if(a>b && a>c) {
        printf("a is greater");
    }
    else if(b>a && b>c) {
        printf("b is greater");
    }
    else if(c>a && c>b) {
        printf("c is greater");
    }
    else {
        printf("equal");
    } 
}