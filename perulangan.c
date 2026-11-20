#include <stdio.h>

int main(){

    // for(int i = 0; i <= 5; i++){
    //     printf("Aku minta maaf ke-%d\n", i);
    // }

    // int n = 0;
    // while(n <= 5){
    //     printf("Coba ke -%d \n", n);
    //     n++;
    // }

    // int k = 0;
    // while (k < 5){
    //     printf("print\n");
    //     //k++;
    // }

    for(int ab = 0; ab < 5; ab++){
        for(int ba = 0; ba < ab; ba++){
            printf("*");
        }
        printf("\n");
    }

    // int pilihan = 1;

    // while (pilihan != 0){
    //     printf("Masukkan 0 untuk berhenti");
    //     scanf("%d", &pilihan);
    // }

    printf("Program berhenti");

    int n = 5;

    do{
        printf("Pertemuan ke -%d \n" ,n);
        n++;
    }while(n < 5);
    return 0;
}