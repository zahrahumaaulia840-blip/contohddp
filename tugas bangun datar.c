#include <stdio.h>

int main()
 {  
    int nim;
    char kodekelas;
    float kodesoal;
    float alas;
    float tinggi;
    float jajargenjang;
    float segitiga;

    printf("masukkan nim anda: ");
    scanf("%d", &nim);

    printf("masukkan kode kelas ddp anda: ");
    scanf(" %c", &kodekelas);
    
    printf("======data diri======\n ");
    printf("nim :%d\n", nim);
    printf("kode kelas ddp:%c\n", kodekelas);
    printf("kode soal anda : 2\n\n);");
    printf("==========\n");

    printf("======bangun datar======\n");
    printf("masukkan alas : ");
    scanf("%f", &alas);
    printf("masukkan tinggi : ");
    scanf("%f" , &tinggi);
    printf("\n");

    jajargenjang = alas * tinggi;
    segitiga = 0.5 * alas * tinggi;

    printf("======bangun datar======\n");
    printf("jajargenjang : %.1f\n",jajargenjang);
    printf ("segitiga : %.2f\n",segitiga);
    
    return 0;
}