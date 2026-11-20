#include <stdio.h>

int main(){
//     char nama[20];
//     char NIM[15];

//     printf("Masukkan nama anda: ");
//     scanf("%s", nama);

//     printf("Masukkan NIM anda: ");
//     scanf("%s", NIM);

//     printf("\nNama: %s", nama);
//     printf("\nNIM: %s", NIM);




// int i;

// for (i = 1; i <= 100; i++) {
//     printf("%d\n", i);
// }



// int nilai;

//     printf("Masukkan nilai ujian anda: ");
//     scanf("%d", &nilai);

    
//     if(nilai > 60){
//         printf("Lulus");
//     }else{
//         printf("Tidak Lulus");
//     }


// int nilai;
//     nilai = 100;

//     if (nilai >= 90){
//         printf("Nilai anda A");
//     } else if (nilai >= 80){
//         printf("Nilai anda B");
//     } else if (nilai >= 75){
//         printf("Nilai anda C");
//     } else if (nilai >= 59){
//         printf("Nilai anda D");
//     } else {
//         printf("Nilai anda E");
//     }



    // int menu;

    // printf("Menu\n");
    // printf("1. Nasi goreng\n");
    // printf("2. Mie ayam\n");
    // printf("3. Kopi\n");
    // printf("4. Teh\n");

    // printf("Masukkan pilihan: ");
    // scanf("%d", &menu);

    // switch (menu) {
    //     case 1:
    //         printf("Anda memilih Nasi goreng");
    //         break;
    //     case 2:
    //         printf("Anda memilih Mie ayam");
    //         break;
    //     case 3:
    //         printf("Anda memilih Kopi");
    //         break;
    //     case 4:
    //         printf("Anda memilih Teh");
    //         break;
    //     default:
    //         printf("Pilihan menu tidak ada");
    // }


    int n = 7;

    do{
        printf("Pertemuan ke -%d \n" ,n);
        n++;
    }while(n < 7);


    return 0;
}