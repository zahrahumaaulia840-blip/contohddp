#include <string.h>
#include <stdio.h>

int main(){
    char username[20];
    char password[20];

    printf("Masukkan ussername: ");
    scanf("%s", username);

    printf("Masukkan password: ");
    scanf("%s", password);

    if (strcmp(username, "admin")== 0 && strcmp(password, "123")== 0){
        printf("Anda berhasil login");
    } else {
        printf("Hidup anda sisa 5 menit");
    }

    return 0;
}