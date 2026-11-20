#include <stdio.h>

int perkalian(){
    int a = 2;
    int b = 3;

    return a * b;
}

int penjumlahan(){
    int a = 10;
    int b = 5;

    return a + b;
}

void sapa (){
    printf("Halo\n");
    printf("Apa kabar?\n");
}

int main(){
    sapa();
    sapa();

    int hasil = penjumlahan();
    printf("Hasil penjumlahan: %d\n", hasil); 

    int hasilperkalian = perkalian();
    printf("Hasil perkalian: %d\n", hasilperkalian);

    int hasil_semua = perkalian() + penjumlahan();
    printf("Hasil dari perkalian dan pernjumlahan: %d", hasil_semua);

    return 0;
}