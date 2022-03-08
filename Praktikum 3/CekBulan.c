/*Nama File : CekBulan.c */
/*Deskripsi : Menampilkan di layar nama bulan sesuai input angka 1-12*/
/*Pembuat : Raditya Ilham Hastoro - 24060121140125*/
/*Tanggal : Selasa, 8 Maret 2022 13:27 WIB*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
//Kamus
    int b;

//Algoritma
    printf("masukkan nomor bulan : ");
    scanf("%d", &b);
    switch(b) {
    case 1 :
        printf("Januari");
        break;
    case 2 :
        printf("Februari");
        break;
    case 3 :
        printf("Maret");
        break;
    case 4 :
        printf("April");
        break;
    case 5 :
        printf("Mei");
        break;
    case 6 :
        printf("Juni");
        break;
    case 7 :
        printf("Juli");
        break;
    case 8 :
        printf("Agustus");
        break;
    case 9 :
        printf("September");
        break;
    case 10 :
        printf("Oktober");
        break;
    case 11 :
        printf("November");
        break;
    case 12 :
        printf("Desember");
        break;
    default :
        printf("Masukan nomor bulan tidak tepat");
    }
}
