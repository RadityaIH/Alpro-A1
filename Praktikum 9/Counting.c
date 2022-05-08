/*Nama File : Counting.c */
/*Deskripsi : Mengurutkan 10 bilangan dalam sebuah array dengan metode counting*/
/*Pembuat : Raditya Ilham Hastoro - 24060121140125*/
/*Tanggal : Minggu, 8 Mei 2022 20:30 WIB*/

#include <stdio.h>
void counting_sort(int B[],int n,int max){
    /*Kamus Lokal*/
    int count[100]={0}, i, j;

    /*Algoritma*/
    for(i=0;i<n;i++)
        count[B[i]]=count[B[i]]+1;
    for(i=0;i<=max;i++)
        for(j=1;j<=count[i];j++)
            printf("%d ",i);
}

int main(){
    /*Kamus Global*/
    int i, A[10]={30,57,12,81,69,14,1,99,17,25}, max=0;

    /*Algoritma*/
    printf("---Counting Sort--- \n");
    printf("Array sebelum disorting: ");
    for(i = 0; i < 10; i++){
        if(A[i]>max)
            max=A[i];
        printf("%d  ", A[i]);
    }
    printf("\nNilai Max: %d\n", max);

    printf("\nArray setelah disorting: ");
    counting_sort(A,10,max);
    return 0;
}
