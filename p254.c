#include <stdio.h>

typedef union{
    float weight;
    int count;
} cupcake;

enum colors{
    RED,GREEN , PUCE
};


int main(){
    cupcake order = {2};
    printf("Cupcake quantity : %i\n" , order.count);

    enum colors favorite = PUCE;

    return 0;
}