/*Nama File : Bubble.c */
/*Deskripsi : Mengurutkan 10 bilangan dalam sebuah array dengan metode bubble*/
/*Pembuat : Raditya Ilham Hastoro - 24060121140125*/
/*Tanggal : Minggu, 8 Mei 2022 21:00 WIB*/

#include <stdio.h>
void bubble_sort(int B[],int n){
    /*Kamus Lokal*/
    int i, j, temp;

    /*Algoritma*/
    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if(B[j] > B[j+1]){
                temp = B[j];
                B[j] = B[j+1];
                B[j+1] = temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ", B[i]);
    }
}

int main(){
    /*Kamus Global*/
    int i, A[10]={30,57,12,81,69,14,1,99,17,25};

    /*Algoritma*/
    printf("---Bubble Sort--- \n");
    printf("Array sebelum disorting: ");
    for(i = 0; i < 10; i++){
        printf("%d  ", A[i]);
    }

    printf("\nArray setelah disorting: ");
    bubble_sort(A,10);
    return 0;
}

