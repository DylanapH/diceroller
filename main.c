#include <iso646.h>
#include <stdio.h>

void rollies(int dice1, int dice2) { //this is a function with the paramiters being the dice sides
    int a = 1; // initialised values, dice 1
    int b = 1; // dice 2
    int i=0; // array position
    float w = 0; //win values
    float l = 0; // loss values
    float t= 0; // tie values
    int totalside = dice1* dice2; //total sides
    float results[totalside]; // array of results, max ammount of sides is the max ammount of values
    while (i<totalside) {
        while (a<=dice1) { // 6 = number of sides on the dice
            while (b<=dice2) // 6 = number of sides on the dice
            {
                results[i] = a - b;
                printf("%f\n", results[i]);
                if (results[i]>0){printf("win \n ");++w;}
                if (results[i]<0){printf("loss \n ");++l;} //printing function for the percentadge
                if (results[i]==0){printf("tie \n ");++t;} // also incrimenting win,loss,tie values
                ++i;
                ++b; // incrimenting b to use the next value


            }
            b=1; // resetting b to restart the process with a different a value
            ++a;
        }
        a=1;
        printf("%f\n", l/totalside); // printing the outcome percentages
        printf("%f\n", t/totalside);
        printf("%f\n", w/totalside);
    }

}
int main(void) {// this is the actual program being ran, it uses the prev function
   rollies(5,5);// dice sides
}

//print count num of things more than 0 as "numberr of wins equlas insert here"
/*int i = 0;
int a = 0;
int b = 0;
int list[] = {1, 2, 3, 4, 5};
int list2[] = {1, 2, 3, 4, 5};

int list3[i]; {
    while (i <= 24)
        while (a <= 4) {
            while (b <= 4) {
                list3[i] = list[a] - list2[b];
                printf("%d\n", list3[i]);
                printf("%d\n", a);
                printf("%d\n", b);
                ++b;
            }
            ++a;
            b = 0;
        }
        */
