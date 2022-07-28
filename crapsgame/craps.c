#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int a, b, puan;
    time_t t;
    /* Initializes random number generator */
    srand((unsigned) time(&t));
    
    a = (rand() % 6) + 1;
    b = (rand() % 6) + 1;
    printf("Gelen zarlar: %d, %d\n",a,b);
    if (a+b==7 || a+b == 11) {
        printf("Kazandýnýz!");
        return;
    }
    else if (a+b == 2 || a+b == 3 || a+b == 12) {
        printf("Kaybettiniz!");
        return;
    }
    else puan=a+b;
    for(int i=2;;i++) {
        a = (rand() % 6) + 1;
        b = (rand() % 6) + 1;
        printf("%d. atýþ: %d, %d\n",i,a,b);
        if(a+b==puan) {
            //puanýna eþit zar attýýðý için kazanýr.
            printf("Kazandýnýz!");
            return;
        } else if (a+b==7) {
            //puanýna eþit zar atamadan 7 attýðý için kaybeder.
            printf("Kaybettiniz!");
            return;
        }
    }
}
