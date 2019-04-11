#include <stdio.h>

int main() {
    int elm;
    int month[12]={10,11,14,15,12,78,96,32,65,89,33,21};

    int *ptr;
    ptr=month;
    elm=ptr[3];
    printf("elm=%d\n", elm);//15

    ptr=month+3;
    printf("ptr=%d\n", ptr); //adres

    ptr=&month[3];
    printf("ptr=%d\n", ptr);//aynı adres

    elm=(ptr+2)[2];
    printf("elm=%d\n", elm);

    elm=*(month+3);
    printf("elm=%d\n", elm);

    ptr=month;
    printf("ptr=%d\n", ptr);

    elm=*(ptr+2);
    printf("elm=%d\n", elm);

    elm=*(month+1);
    printf("elm=%d\n", elm);
    return 0;
}