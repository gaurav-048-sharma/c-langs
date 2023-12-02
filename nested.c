#include<stdio.h>
int main() {
    int a =20, b=20, c=20;
    if(a>b) {
        if(a>c) {
            printf("a is greater than b and c");
        }
        else {
            printf("a is not greater than c");
        }
    }
    else if(b>a) {
        if(b>c) {
            printf("b is greater than a and c");
        } else {
            printf("b is not greater than c");
        }
    }
    else if(c>a) {
        if(c>b) {
            printf("c is greater than a and b");
       } else {
            printf("c is not greater than a and b");
       }
    }
    else{
        printf("equal");
    }
    return 0;
}
