#include <stdio.h>

int cekkelulusan(){
    int nilai;

    printf("Masukkan nilai: ");
    scanf("%d", nilai);

    if(nilai >= 69){
        return 1;
    } else {
        return 0;
    }
}

void inputmahasiswa(){
    char nama[50];

    printf("Masukkan nama: ");
    scanf("%s", nama);

    printf("\n Nama: %s\n", nama);
}

int main (){
    int status;

    printf("===== DATA MAHASISWA =====\n");

    inputmahasiswa();

    int status = cekkelulusan();

    if(status == 1){
        printf("Kamus lulus");
    } else {
        printf("Waktu kamu sudah dekat");
    }

    return 0;
}