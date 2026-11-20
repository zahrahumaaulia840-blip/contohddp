#include <stdio.h>

int perkalian(int x){
    
    return x * x;
}

int main(){
    int angka = 6;
    int hasil = perkalian(angka);

    printf("Hasil kali %d adalah %d", angka, hasil);
    return 0;
}