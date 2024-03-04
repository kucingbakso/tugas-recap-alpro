#include <stdio.h>

int main(){
    int jumlahelemen, hasil = 0;

    printf("Masukkan jumlah elemen : ");
    scanf("%d", &jumlahelemen);

    int elemen[jumlahelemen];

    for (int i = 0; i<jumlahelemen; i++){
        printf("Elemen ke - %d : ", i);
        scanf("%d", &elemen[i]);
    }

    for (int i = 0; i<jumlahelemen; i++)
        hasil = hasil + elemen[i];

    printf("Hasil penjumlahannya adalah %d", hasil);
}