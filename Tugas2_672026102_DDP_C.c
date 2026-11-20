#include <stdio.h>

void tampilkan_menu() {
    printf("===== MENU KANTIN =====\n");
    printf("1. Nasi Goreng  : Rp15000\n");
    printf("2. Mie Goreng   : Rp12000\n");
    printf("3. Es Teh       : Rp5000\n");
    printf("4. Es Jeruk     : Rp7000\n");
    printf("5. Air Mineral  : Rp4000\n");
}

int hitung_total(int pilihan, int jumlah) {
    int harga;

    if (pilihan == 1)
        harga = 15000;
    else if (pilihan == 2)
        harga = 12000;
    else if (pilihan == 3)
        harga = 5000;
    else if (pilihan == 4)
        harga = 7000;
    else if (pilihan == 5)
        harga = 4000;
    else
        harga = 0;

    return harga * jumlah;
}

void tampilkan_struk(int pilihan, int jumlah, int total) {
    printf("\n===== STRUK PEMBELIAN =====\n");

    if (pilihan == 1)
        printf("Menu   : Nasi Goreng\n");
    else if (pilihan == 2)
        printf("Menu   : Mie Goreng\n");
    else if (pilihan == 3)
        printf("Menu   : Es Teh\n");
    else if (pilihan == 4)
        printf("Menu   : Es Jeruk\n");
    else if (pilihan == 5)
        printf("Menu   : Air Mineral\n");

    printf("Jumlah : %d\n", jumlah);
    printf("Total  : Rp%d\n", total);
    printf("===========================\n");
}

int main() {
    int pilihan, jumlah, total;

    tampilkan_menu();

    printf("\nPilih menu (1-5): ");
    scanf("%d", &pilihan);

    printf("Jumlah pembelian: ");
    scanf("%d", &jumlah);

    if (pilihan < 1 || pilihan > 5 || jumlah <= 0) {
        printf("Pilihan atau jumlah tidak valid!\n");
    } else {
        total = hitung_total(pilihan, jumlah);
        tampilkan_struk(pilihan, jumlah, total);
    }

    return 0;
}

