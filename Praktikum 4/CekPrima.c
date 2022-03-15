///*Nama File : CekPrima.c */
///*Deskripsi : Membuat algoritma untuk menentukan apakah sembarang integer merupakan bilangan prima*/
///*Pembuat : Raditya Ilham Hastoro - 24060121140125*/
///*Tanggal : Selasa, 15 Maret 2022 17:46 WIB*/
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
///*Kamus*/
//    int N, i, x=0, y;
//
///*Algoritma*/
//    printf("Masukkan bilangan : ");
//    scanf("%d", &N);
//
//    if (N>0) {
//        for (i=1; i<=N; i++) {
//            if (N%i == 0) {
//                x = x+i;
//                y = N+1;
//            }
//        }
//        if (x==y) {
//            printf("%d termasuk bilangan Prima", N);
//        }
//        else {
//            printf("%d bukan bilangan prima", N);
//        }
//    }
//    else {
//        printf("Masukkan bilangan positif!");
//    }
//    return 0;
//}
//
