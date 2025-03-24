#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);

   
    // Your code goes here
    int kast[100];
    int one=0;
    int two=0;
    int three=0;
    int four=0;
    int five=0;
    int six=0;
    int summa=0;
    float medel=0;
    for (size_t i = 0; i < 100; i++)
    {
        kast[i]=(rand() % 6) + 1;
        summa+=kast[i];
            if(kast[i]==1){
            one++;
        }
            else if(kast[i]==2){
            two++;
        }
            else if(kast[i]==3){
            three++;
        }
            else if(kast[i]==4){
            four++;
        }
            else if(kast[i]==5){
            five++;
        }
            else if(kast[i]==6){
            six++;
        }
    }
    medel=(float)summa/100;
        printf("%d\n", one);
        printf("%d\n", two);
        printf("%d\n", three);
        printf("%d\n", four);
        printf("%d\n", five);
        printf("%d\n", six);
        printf("%d\n", summa);
        printf("%.1f\n", medel);
    
    

    return 0;
}
