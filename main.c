#include <iso646.h>
#include <stdio.h>

int main(void)
{
    int a = 1;
    int b = 1;
    int i=0;
    float w = 0;
    float l = 0;
    float t= 0;
    int totalside = 25;
    float results[totalside];
    while (i<totalside) {
        while (a<=5) { // 6 = number of sides on the dice
            while (b<=5) // 6 = number of sides on the dice
            {
                results[i] = a - b;
                printf("%f\n", results[i]);
                if (results[i]>0){printf("win \n ");++w;}
                if (results[i]<0){printf("loss \n ");++l;}
                if (results[i]==0){printf("tie \n ");++t;}
                ++i;
                ++b;


            }
            b=1;
            ++a;
        }
        a=1;
        printf("%f\n", l/totalside);
        printf("%f\n", t/totalside);
        printf("%f\n", w/totalside);

    }
    /*
    printf("%f\n", w/totalside);
    printf("%f\n", l/totalside);
    printf("%f\n", t/totalside);
*/



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
