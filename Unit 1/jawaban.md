# Unit 1

## Percobaan 2
- percobaan2a.c  
> Program error karena tidak ada include dan tidak menuliskan library <stdio.h> yang digunakan untuk melakukan output dan input.

```c
#include <stdio.h>
```

- percobaan2b.c 
> Program error karena pada bagian printf(Alpro itu mudah!) yang berbentuk string tidak menggunakan (" ").

```c
printf("Alpro itu mudah!");
```

- percobaan2c.c 
> Program error karena tidak ada fungsi main() yang merupakan titik awal eksekusi program.

```c
#include <stdio.h>

int main(){
    printf("Alpro itu mudah!");
    return 0;
}
```


## Percobaan 3
- percobaan3a.c 
> Output :

```c
Baris pertamaBaris kedua
Baris ketiga
```

- percobaan3b.c 
> Output :

```c
Oh my, oh my God
예상했어 나
I was really hoping that he will come through
```
> Fungsi dari /n adalah memberikan baris baru/membuat baris baru sehingga teks setelahnya dimulai pada baris baru.

## Percobaan 5
> Perbedaan pada kedua program tersebut adalah penggunaan fungsi scanf() dan fgets(). Fungsi scanf() membaca satu buah kata pada teks yang diinput, sedangkan fgets() membaca satu baris teks yang diinput.

## Percobaan 8
> Titik yang diikuti angka pada kode tersebut berfungsi untuk menentukan jumlah bilangan di belakang koma yang akan ditampilkan.