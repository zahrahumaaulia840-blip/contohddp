#include <stdio.h>
#include <string.h>

int main(){
    char nama[] = "Raphael";
    char tambahan[] = " Adalah Mahasiswa";
    char tambahan2[] = " dan rajin";
    cahr tambahan3[] = " serta pintar"

    // char nama1[] = "Moses";
    // char nama2[20];
    // //char kalimat[] = "Keren Bangettt";
    
    // strcpy(nama2, nama1);

    // printf("Nama Pertama: %s\n", nama1);
    // printf("Nama Kedua: %s\n", nama2);
    //printf("Panjang nama: %d\n", strlen(nama));
    //printf("Panjang kalimat: %d", strlen(kalimat));

    strcat(strcat(nama, tambahan), tambahan2, tambahan 3);
    strcat(nama, tambahan);
    printf("Hasil penggabungan: %s\n", nama);
    //puts(nama1);

    return 0;
}