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
        printf("Kazand�n�z!");
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
        printf("%d. at��: %d, %d\n",i,a,b);
        if(a+b==puan) {
            //puan�na e�it zar att���� i�in kazan�r.
            printf("Kazand�n�z!");
            return;
        } else if (a+b==7) {
            //puan�na e�it zar atamadan 7 att��� i�in kaybeder.
            printf("Kaybettiniz!");
            return;
        }
    }
}
