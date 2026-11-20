#include <stdio.h>

int main(){
    FILE *tambah;

    tambah = fopen("mahasiswa.txt", "a");

    if(tambah == NULL){
        printf("File gagal dibuka.\n");
        return 1;
    }

    //tambahkan data
    fprintf(tambah, "Nama: Moses\n");
    fprintf(tambah, "NIM: 672026001\n");
    fprintf(tambah, "Nilai : 90\n");

    fclose(tambah);
    printf("Data berhasil ditambahkan.\n");
    
    return 0;

}