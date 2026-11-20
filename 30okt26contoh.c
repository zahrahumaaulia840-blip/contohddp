#include <stdio.h>

void nama(char nama[]){
    printf("Halo %s \n", nama);
}

void nim(char nim[]){
    printf("NIM saya %s \n", nim);
}

void inputnama(){
    char nama[50];

    printf("Masukkan nama: ");
    scanf("%s", nama);

    printf("Nama kamu: %s, nama");
}

int main(){
    nama("zahraaa");
    nim("672026102");
}
