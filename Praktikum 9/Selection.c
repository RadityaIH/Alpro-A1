/*Nama File : Selection.c */
/*Deskripsi : Mengurutkan 10 bilangan dalam sebuah array dengan metode selection*/
/*Pembuat : Raditya Ilham Hastoro - 24060121140125*/
/*Tanggal : Minggu, 8 Mei 2022 21:40 WIB*/

#include <stdio.h>
void selection_sort(int B[],int n){
    /*Kamus Lokal*/
    int i, j, temp, min;

    /*Algoritma*/
    for(i=0; i<n-1; i++){
        min = i;
        for(j=i+1;j<n;j++){
            if(B[j] < B[min]){
                min = j;
            }
        }
        temp = B[min];
        B[min] = B[i];
        B[i] = temp;
    }
    for(i=0;i<n;i++){
    printf("%d ", B[i]);
    }
}

int main(){
    /*Kamus Global*/
    int i, A[10]={30,57,12,81,69,14,1,99,17,25};

    /*Algoritma*/
    printf("---Selection Sort--- \n");
    printf("Array sebelum disorting: ");
    for(i = 0; i < 10; i++){
        printf("%d  ", A[i]);
    }

    printf("\nArray setelah disorting: ");
    selection_sort(A,10);
    return 0;
}
