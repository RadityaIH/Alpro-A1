/*Nama File :Insertion.c */
/*Deskripsi : Mengurutkan 10 bilangan dalam sebuah array dengan metode insertion*/
/*Pembuat : Raditya Ilham Hastoro - 24060121140125*/
/*Tanggal : Minggu, 8 Mei 2022 21:20 WIB*/

#include <stdio.h>
void insertion_sort(int B[],int n){
    /*Kamus Lokal*/
    int i, j, temp;

    /*Algoritma*/
    for(i=1; i<n; i++){
        temp = B[i];
        j = i-1;
        while(j>=0 && B[j]>temp){
            B[j+1] = B[j];
            j = j-1;
        }
        B[j+1] = temp;
    }
    for(i=0;i<n;i++){
    printf("%d ", B[i]);
    }
}

int main(){
    /*Kamus Global*/
    int i, A[10]={30,57,12,81,69,14,1,99,17,25};

    /*Algoritma*/
    printf("---Insertion Sort--- \n");
    printf("Array sebelum disorting: ");
    for(i = 0; i < 10; i++){
        printf("%d  ", A[i]);
    }

    printf("\nArray setelah disorting: ");
    insertion_sort(A,10);
    return 0;
}


