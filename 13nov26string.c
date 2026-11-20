#include <stdio.h>
#include <string.h> //library string= untuk memakai fungsi dan perintah dari string

int main(){
    //char nama [30];
    char kalimat [30];

    // printf("Masukkan nama panggilan: ");
    // scanf("%s", nama);

    // printf("Kenalin gw %s",nama);

    printf("Masukkan satu kalimatmu: ");
    fgets(kalimat, sizeof(kalimat), stdin); //sizeof= membatasi inputan dari kalimat, stdin = standar input

    kalimat[strcspn(kalimat, "\n")] = '\0';

    int panjang = strlen(kalimat); //strlen=baca beberapa intputan dari array yang kalian gunakan

    printf("Kalimat: %s\n", kalimat);
    printf("Jumlah Karakter : %d", panjang);

    return 0;
}