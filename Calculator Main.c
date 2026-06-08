#include <stdio.h>

int main(){
    int pilih;
    float a, b, hasil;
    char choice = 'y';
    do
    {
        printf("--- Kalkulator ---\nMasukkan Angka Pertama: "); // meminta input dari user untuk angka pertama
        scanf("%f",&a);
        
        printf("Masukkan Angka Kedua: "); // meminta input dari user untuk angka kedua
        scanf("%f",&b);
        
        printf("Pilih Operasi: \n1. Tambah\n2. Kurang\n3. Bagi\n4. Kali\nPilihan: "); // meminta input dari user untuk operasi yang diinginkan
        scanf("%d",&pilih);

        switch (pilih) {  // menggunakan switch case sebagai program flow program ini
            case 1:
                hasil = a + b;
                printf("Hasil operasi pertambahan: %.2f\n", hasil);
                break;
            case 2:
                hasil=a-b;
                printf("Hasil operasi pengurangan: %.2f\n", hasil);
                break;
            case 3:
                hasil=a/b;
                printf("Hasil operasi pembagian: %.2f\n", hasil);
                break;
            case 4:
                hasil=a*b;
                printf("Hasil operasi perkalian: %.2f\n", hasil);
                break;
            default:
                printf("Pilihan tidak valid!\n");
                break;
            }
        printf("Continue? (y/n): ");
        scanf(" %c", &choice);
    } while(choice == 'y');
}
