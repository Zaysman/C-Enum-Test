#include<stdio.h>

enum Numbers{

    One = 1,
    Two = 2,
    Three = 3,
    Four = 4,
    Five = 5

};

enum Values {
    Val1 = 5,
    Val2 = 41,
    Val3 = 23,
    Val4 = 9,
    Val5 = 91

};

enum Bits {
    ONE = 1,
    TWO = 2,
    FOUR = 4,
    EIGHT = 8,
    SIXTEEN = 16
};

int main() {

    //Arithmetic Operators
    printf("%d\n", (One + Val1));
    printf("%d\n", (Val5 - Four));
    printf("%d\n", (Val4 / Three));
    printf("%d\n", (Two * Val3));
    printf("%d\n\n", (Val2 % Five));

    //Bitwise Operators
    printf("%d\n", (ONE | TWO));
    printf("%d\n", (FOUR & FOUR));
    printf("%d\n", (SIXTEEN ^ ONE));
    printf("%d\n", (FOUR >> 2));
    printf("%d\n", (EIGHT << 1));


    return 0;
}