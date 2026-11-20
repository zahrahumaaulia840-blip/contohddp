#include <stdio.h>

int main(){

    if(remove("mahasiswa.txt") == 0) {
        printf("File mahasiswa.txt berhasil dihapus.\n");
    } else {
        printf("File mahasiswa.txt gagal dihapus.\n");
    }
    return 0;
}