#include <stdio.h>
#include <math.h>

int main() {
    int pilihan;
    double angka;

    do {
        // Menampilkan menu
        printf("=============================\n");
        printf("      Kalkulator Ilmiah      \n");
        printf("=============================\n");
        printf("1. Akar Kuadrat\n");
        printf("2. Pangkat\n");
        printf("3. Sinus\n");
        printf("4. Kosinus\n");
        printf("5. Tangen\n");
        printf("6. Keluar\n");
        printf("=============================\n");
        printf("Pilihan Anda: ");
        scanf("%d", &pilihan);

        // Melakukan operasi sesuai pilihan
        switch (pilihan) {
            case 1:
                printf("Masukkan angka: ");
                scanf("%lf", &angka);
                printf("Akar kuadrat dari %.2lf adalah: %.2lf\n", angka, sqrt(angka));
                break;
            case 2:
                printf("Masukkan angka: ");
                scanf("%lf", &angka);
                printf("Masukkan pangkat: ");
                int pangkat;
                scanf("%d", &pangkat);
                printf("%.2lf pangkat %d adalah: %.2lf\n", angka, pangkat, pow(angka, pangkat));
                break;
            case 3:
                printf("Masukkan sudut dalam derajat: ");
                scanf("%lf", &angka);
                printf("Sinus dari %.2lf derajat adalah: %.2lf\n", angka, sin(angka * 3.14159265358979323846 / 180.0));
                break;
            case 4:
                printf("Masukkan sudut dalam derajat: ");
                scanf("%lf", &angka);
                printf("Kosinus dari %.2lf derajat adalah: %.2lf\n", angka, cos(angka * 3.14159265358979323846 / 180.0));
                break;
            case 5:
                printf("Masukkan sudut dalam derajat: ");
                scanf("%lf", &angka);
                printf("Tangen dari %.2lf derajat adalah: %.2lf\n", angka, tan(angka * 3.14159265358979323846 / 180.0));
                break;
            case 6:
                printf("Terima kasih telah menggunakan aplikasi ini. Sampai jumpa!\n");
                break;
            default:
                printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }

    } while (pilihan != 6);

    return 0;
}
