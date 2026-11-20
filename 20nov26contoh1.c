#include <stdio.h>

int main(){
    FILE *fp;

    fp = fopen("catatan.txt", "w"); // buka file (w = write/tulis)
    fprintf(fp, "Halo nama saya Raphael\n");
    fclose(fp);

    printf("File berhasil dibuat.");
    return 0;
}