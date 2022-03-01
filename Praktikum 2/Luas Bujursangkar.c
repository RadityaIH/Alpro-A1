/*Nama File : LuasBujursangkar.c */
/*Deskripsi : Membuat algoritma untuk menghitung luas bujursangkar*/
/*Pembuat : Raditya Ilham Hastoro - 24060121140125*/
/*Tanggal : 1 Maret 2022*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
/*Kamus*/
    int s;
    int Luas;

/*Algoritma*/
    printf("Masukkan sisi: ");
    scanf("%d", &s);
    Luas = s*s;

    printf("Luas Bujursangkar = %d", Luas);
    return 0;
}
