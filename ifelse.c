#include <stdio.h>

int main(){

    //if dengan deklarasi langsung dengan valeu nya
   // int x = 30;
    //int y = 10;

//if(x > y){
    //printf("x lebih besar dari y");
//}else{
    //printf("masukkan logika mu yang benar");
//}


// int nilai = 59;
// if (nilai > 80){
//      printf("Nilai anda adalah A");
//  } else if (nilai > 70){
//      printf("Nilai anda adalah B");
//  } else if (nilai > 60){
//      printf("Nilai anda C");
//  } else {
//     printf("REMIDIII");
// }


    //int nilai;
    //nilai = 100;

    // if (nilai >= 59){
    //     printf("Nilai anda D - c");
    // } else if (nilai >= 70){
    //     printf("Nilai anda B");
    // } else if (nilai >= 80){
    //     printf("Nilai anda A");
    // } else {
    //     printf("Nilai anda E");
    // }


    // int nilai;
    
    // printf("Masukkan nilai anda: ");
    // scanf("%d", &nilai);

    // if(nilai >= 50){ //apakah nilai >=50? jika iya masuk ke blok ini
    //     if(nilai >= 80){
    //         printf("Anda lulus dengan nilai anda A");
    //     } else if (nilai >= 70){
    //         printf("Anda lulus dengan nilai anda B");
    //     } else {
    //         printf("Anda lulus dengan nilai C");
    //     }
    // } else {
    //     if (nilai >= 40){
    //         printf("Anda tidak lulus dengan nilai D");
    //     } else {
    //         printf("Anda tidak lulus dengan nilai C");
    //     }
    // }


    int nilai, usnm, psw;
    int usnm_check = 55555;
    int psw_check = 12345;

    printf("Masukkan username anda: ");
    scanf("%d", &usnm);
    printf("Masukkan password anda: ");
    scanf("%d", &psw);

    if(usnm == usnm_check && psw == psw_check){
        printf("Masukkan nilai anda: ");
        scanf("%d", &nilai);

        if(nilai >= 80){
            printf("Nilai anda adalah A");
        }else if(nilai >= 70){
            printf("Nilai anda adalah B");
        }else if(nilai >= 60){
            printf("Nilai anda adalah C");
        }else{
            printf("Masukkan nilai anda yang benar");
        }
    }else{
        printf("Cek lagi username dan password anda!");
    }


    return 0;
}
