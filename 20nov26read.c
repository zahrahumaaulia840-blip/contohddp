#include <stdio.h>

int main() {
    FILE *mahasiswa;
    char teks[100];

    //membuka file 
    mahasiswa = fopen("mahasiswa.txt", "r");

    if (mahasiswa == NULL) {
        printf("File tidak ditemukan.\n");
        return 1;
    }

    //membaca isi file
    while (fgets(teks, sizeof(teks), mahasiswa) != NULL) {
        printf("%s", teks);
    }

    //menutup file
    fclose(mahasiswa);

    return 0;
}