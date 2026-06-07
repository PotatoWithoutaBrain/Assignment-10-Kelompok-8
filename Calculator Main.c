#include <stdio.h>

int main(){
    int a, b, hasil, pilih;
    
    printf("--- Kalkulator ---\nMasukkan Angka Pertama: ");
    scanf("%i",&a);
    
    printf("Masukkan Angka Kedua: ");
    scanf("%i",&b);
    
    printf("Pilih Operasi: \n1. Tambah\n2. Kurang\n3. Bagi\n4. Kali\nPilihan: ");
    scanf("%i",&pilih);

    switch (pilih) {
        case 1:
            printf("Angka pertama: %d\n", a);
            printf("Angka kedua: %d\n", b);
            
            hasil = a + b;
            printf("Hasil operasi: %d\n", hasil);
            break;
        default:
            printf("Pilihan tidak valid!\n");
            break;
    }
}
