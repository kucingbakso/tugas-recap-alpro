#include <stdio.h>

int sisi;

int kelilingpersegi (int sisi){
    return 4 * sisi;
}

int luaspersegi (int sisi){
    return sisi * sisi;
}

int volumekubus (int sisi){
    return sisi * sisi * sisi;
}

int main(){
    printf("Masukkan sisi persegi : ");
    scanf("%d", &sisi);

    printf("Keliling persegi : %d\n", kelilingpersegi(sisi));
    printf("Luas persegi : %d\n", luaspersegi(sisi));
    printf("Volume kubusnya : %d", volumekubus(sisi));
}