/*Nama File : CekHari.c */
/*Deskripsi : Menampilkan di layar nama hari sesuai input angka 1-7*/
/*Pembuat : Raditya Ilham Hastoro - 24060121140125*/
/*Tanggal : Selasa, 8 Maret 2022 12:58 WIB*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
//Kamus
    int h;

//Algoritma
    printf("masukkan nomor hari : ");
    scanf("%d", &h);
    switch(h) {
    case 1 :
        printf("Minggu");
        break;
    case 2 :
        printf("Senin");
        break;
    case 3 :
        printf("Selasa");
        break;
    case 4 :
        printf("Rabu");
        break;
    case 5 :
        printf("Kamis");
        break;
    case 6 :
        printf("Jumat");
        break;
    case 7 :
        printf("Sabtu");
        break;
    default :
        printf("Masukan nomor hari tidak tepat");
    }
}
