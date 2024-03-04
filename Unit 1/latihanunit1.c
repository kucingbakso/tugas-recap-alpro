#include <stdio.h>

int s1, t1;
int v1, t2;
int s2, v2;

int main () {
    scanf("%d %d\n", &s1, &t1);
    scanf("%d %d\n", &v1, &t2);
    scanf("%d %d\n", &s2, &v2);

    float hasilkec = (float) s1/t1;
    float hasiljarak = (float) v1*t2;
    float hasilwaktu = (float) s2/v2;
    
    printf("Kecepatannya adalah %.2f\n", hasilkec);
    printf("Jaraknya adalah %.2f\n", hasiljarak);
    printf("Waktunya adalah %.2f\n", hasilwaktu);

    return 0;
}

