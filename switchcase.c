#include <stdio.h>

int main(){

    int hari;

    printf("Cek Hari : ");
    scanf("%d", &hari);


    switch(hari){
        case 1:
            printf("Hari Senin");
            break;
        case 2:
            printf("Hari Selasa");
            break;
        case 3:
            printf("Hari Rabu");
            break;
        case 4:
            printf("Hari Kamis");
            break;
        case 5:
            printf("Hari Jumat");
            break;
        case 6:
            printf("Hari Sabtu");
            break;
        case 7:
            printf("Hari Minggu");
            break;
        default:
            printf("Masukkan yang benar dong");
    }



    return 0;

}