#include <stdio.h>

int main(){
    FILE *fp;

    //Membuka file
    fp = fopen("mahasiswa.txt", "w");

    //mengecek file
    if(fp == NULL){
        printf("File gagal dibuka.\n");
        return 1;
    }   

    fprintf(fp, "Nama: Raphael\n");
    fprintf(fp, "NIM: 672026000\n");
    fprintf(fp, "Nilai : 100\n");

    fclose(fp);

    printf("Data berhasil disimpan.\n");

    return 0;
}

