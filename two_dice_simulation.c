#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Counts for sums 2..12 */
int to = 0;
int tre = 0;
int fire = 0;
int fem = 0;
int seks = 0;
int syv = 0;
int otte = 0;
int ni = 0;
int ti = 0;
int elleve = 0;
int tolv = 0;

int sum;
int Terning1;
int Terning2;

/*
 * Kører 50.000 terningkast (to terninger) og tæller forekomsten af summen.
 */
void slag(void) {
     /* seed random */
    srand((unsigned)time(NULL));
    
    for (int i = 0; i < 50000; ++i) {
        Terning1 = rand() % 6 + 1;
        Terning2 = rand() % 6 + 1;
        sum = Terning1 + Terning2;
        switch (sum) {
            case 2:  
                to++; 
                break;
            case 3:  
                tre++; 
                break;
            case 4:  
                fire++; 
                break;
            case 5:  
                fem++; 
                break;
            case 6:  
                seks++; 
                break;
            case 7:  
                syv++; 
                break;
            case 8:    
                otte++; 
                break;
            case 9:  
                ni++; 
                break;
            case 10: 
                ti++; 
                break;
            case 11: 
                elleve++; 
                break;
            case 12: 
                tolv++; 
                break;
            default: 
                break;
        }
    }

    /* Udskriv resultater */
    printf("Resultater efter 50000 kast:\n");
    printf(" 2: %d\n", to);
    printf(" 3: %d\n", tre);
    printf(" 4: %d\n", fire);
    printf(" 5: %d\n", fem);
    printf(" 6: %d\n", seks);
    printf(" 7: %d\n", syv);
    printf(" 8: %d\n", otte);
    printf(" 9: %d\n", ni);
    printf("10: %d\n", ti);
    printf("11: %d\n", elleve);
    printf("12: %d\n", tolv);
}

int main(void) {
   
    slag();

    return 0;
}
     

