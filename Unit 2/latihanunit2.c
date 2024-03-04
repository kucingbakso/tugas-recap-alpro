#include <stdio.h>

int jumlahtransaksi, pengeluaran, totalpengeluaran;

int main () {
    printf("Masukkan jumlah transaksi : ");
    scanf("%d", &jumlahtransaksi);

    if (jumlahtransaksi <= 0)
        printf("Tidak ada transaksi hari ini.");
    else {
        for (int i = 1; i <= jumlahtransaksi; i++)
        {
            printf("Masukkan nominal transaksi ke %d : ", i);
            scanf("%d", &pengeluaran);
            totalpengeluaran = totalpengeluaran + pengeluaran;
        }
        printf("Total pengeluaran hari ini adalah %d", totalpengeluaran);
    }
}