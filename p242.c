#include <stdio.h>

typedef struct {
    const char *description;
    float value;
} swag;

typedef struct{
    swag *swag;
    const char *sequence;

} combination;

typedef struct {
    combination numbers;
    const char *make;
} safe;

typedef union{
    short count;
    float weight;
    float volume;
} quantity;

typedef struct{
    const char *color;
    int gears;
    int height;
} bike;

typedef struct{
    const char *name;
    const char *country;
    quantity amount;
} fruit_ordeer;

int main(){

    swag gold = {"GOLD!" , 1000000.0};
    combination numbers = {&gold ,"6502"};
    safe s = {numbers  , "RAMACON250"};

    printf("%s\n" , (*s.numbers.swag).description);

    quantity q1 = {4};
    quantity q = {.count =4};
    quantity q2;
    q2.volume = 1.5f;

    bike b = {.gears =21 , .height =17};

    fruit_ordeer apple = {"apple" , "England" , .amount.weight = 4.2};
    printf("This order contains %2.2f lbs of %s " , apple.amount.weight , apple.name);

    return 0 ;
}