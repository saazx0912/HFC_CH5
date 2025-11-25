#include <stdio.h>

typedef enum {
    COUNT , POUND ,PINTS
} unit_of_measure;

typedef union{
    short count;
    float weight;
    float volume;
} quantity;

typedef struct {
    const char *name;
    const char *country;
    quantity amount;
    unit_of_measure units;
} fruit_order;

void display(fruit_order order){
    printf("This order contains ");
    if(order.units == PINTS){
        printf("%2.2f pints of %s\n" , order.amount.volume , order.name);
    }
    else if (order.units == POUND)
    {
        printf("%2.2f lbs of %s\n" , order.amount.weight , order.name);
    }else{
        printf("%i %s\n" , order.amount.count , order.name);
    }
    
}

typedef struct {
    unsigned int low_pass_vdf:1;
    unsigned int filter_coupler:1;
    unsigned int reverb:1;
    unsigned int sequetial:1;
} synth;


typedef struct{
    unsigned int first_visit:1;
    unsigned int come_again:1;
    unsigned int finger_lost:4;
    unsigned int shark_attack:1;
    unsigned int days_a_week:3;
} survey;

int main(){
    fruit_order apples = {"apples" , "England" , .amount.count = 144 , .units = COUNT};
    fruit_order strawberries = {"strawberries" , "Spain" , .amount.weight = 17.6 , .units = POUND};
    fruit_order oj = {"orange juice" , "U.S.A" , .amount.volume = 10.5 ,.units =PINTS};
    display(apples);
    display(strawberries);
    display(oj);
    return 0;
}