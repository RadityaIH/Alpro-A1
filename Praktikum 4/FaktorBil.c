/*Nama File : FaktorBil.c */
/*Deskripsi : Membuat algoritma untuk menentukan faktor bilangan dari sembarang integer*/
/*Pembuat : Raditya Ilham Hastoro - 24060121140125*/
/*Tanggal : Selasa, 15 Maret 2022 17:28 WIB*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
/*Kamus*/
    int N, i;

/*Algoritma*/
    printf("Masukkan bilangan : ");
    scanf("%d", &N);

    if (N>0) {
        for (i=1; i<N; i++) {
            if (N%i == 0) {
                printf("%d, ", i);
            }
        }
        printf("dan %d", i);
    }
    else {
        printf("Masukkan bilangan positif!");
    }
    return 0;
}
