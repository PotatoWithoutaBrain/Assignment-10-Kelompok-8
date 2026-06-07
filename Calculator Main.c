#include <stdio.h>

int main(){
    int a, b, hasil, pilih;
    
    printf("--- Kalkulator ---\nMasukkan Angka Pertama: "); // meminta input dari user untuk angka pertama
    scanf("%i",&a);
    
    printf("Masukkan Angka Kedua: "); // meminta input dari user untuk angka kedua
    scanf("%i",&b);
    
    printf("Pilih Operasi: \n1. Tambah\n2. Kurang\n3. Bagi\n4. Kali\nPilihan: "); // meminta input dari user untuk operasi yang diinginkan
    scanf("%i",&pilih);

    switch (pilih) {  // menggunakan switch case sebagai program flow program ini
        case 1:
            
            hasil = a + b;
            printf("Hasil operasi: %d\n", hasil);
            break;
        case 2:
            hasil=a-b;
            printf("Hasil operasi: %d\n",hasil);
            break;
        default:
            printf("Pilihan tidak valid!\n");
            break;
    }
}
