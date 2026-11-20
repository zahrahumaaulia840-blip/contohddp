#include <stdio.h>

int faktorial(int n){
    if(n<=1){
        return 1;
    }
    return n * faktorial(n-1);
}

int main(){
    int hasil = faktorial(4);
    printf("Faktorial 4 = %d", hasil);
    return 0;
}